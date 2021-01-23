#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include <algorithm>

// Wyrazenie regularne sprawdzajace, czy dany string jest operatorem.
const std::regex operatorRegex("\\+|-|\\*|\\/");

// Prosta funkcja sprawdzajaca
struct compare {
    int key;
    compare(char i): key(i) { }

    bool operator()(char i)
    {
        return (i == key);
    }
};

struct isOperatorWithGreaterPrecedence {
    bool operator()(char i) {
        return std::regex_match(std::string(1, i), operatorRegex);
    }
};

int main() {
    std::string str;
    std::vector<char> output, operators;

    std::cout << "Podaj operacje w notacji infix: ";
    std::cin >> str;

    int n = 0;

    // Analiza wprowadzonego wyrazenia matematycznego.
    for (const auto &value: str) {
        // Jezeli dany char nie jest operatorem (jest liczba), dodaj go do wektora `output`.
        if (isdigit(value)) {
            output.push_back(value);
        }

        // Jezeli dany char jest operatorem, wykonaj nastepujace polecenia.
        if (std::regex_match(std::string(1, value), operatorRegex)) {
            // Reset zmiennej n.
            n = 0;

            // Dopoki w wektorze `operators` wystepuje operator o wyzszym priorytecie, przenies elementy z wektora `operators` do wektora `output`.
            while (std::any_of(operators.begin(), operators.end(), isOperatorWithGreaterPrecedence())) {
                output.push_back(operators[n]);
                operators.erase(operators.begin() + n);
                n++;
            }

            // Dodaj operator do wektora `operators`.
            operators.push_back(value);
        }

        // Jezeli dany char jest rozpoczeciem nawiasu, dodaj go do wektora `operators`
        if (std::string(1, value) == "(") {
            operators.push_back(value);
        }

        // Jezeli dany char jest zakonczeniem nawiasum, wykonaj nastepujace polecenia.
        if (std::string(1, value) == ")") {
            // Reset zmiennej n.
            n = 0;

            // Dopoki w wektorze `operators` nie wystepuje rozpoczecie nawiasu, przenies elementy z wektora `operators` do wektora `output`.
            while (std::none_of(operators.begin(), operators.end(), compare("("[0]))) {
                output.push_back(operators[n]);
                operators.erase(operators.begin() + n);
                n++;
            }

            // Usun z wektora `operators` element bedacy otwarciem nawiasu.
            for (int j = 0; j < operators.size(); j++) {
                if (operators[j] == "("[0]) {
                    operators.erase(operators.begin() + j);
                }
            }
        }
    }

    // Przenies pozostale operatory do wektora `output`.
    for (const auto &value: operators) {
        output.push_back(value);
    }

    std::cout << "Operacja w notacji odwroconej polskiej: \n";
    std::cout << std::string(output.begin(), output.end());
}
