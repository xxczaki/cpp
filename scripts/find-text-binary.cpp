#include <iostream>
#include <string>
#include <regex>
#include <math.h>

int main() {
    std::string text = "BBAABBAAB";
    std::string toFind = "BAAB";

    text = std::regex_replace(text, std::regex("A"), "0");
    text = std::regex_replace(text, std::regex("B"), "1");
    toFind = std::regex_replace(toFind, std::regex("A"), "0");
    toFind = std::regex_replace(toFind, std::regex("B"), "1");

    int sum = 0;

    for (int i = toFind.length() - 1; i >= 0; i--) {
        const int converted = toFind[i] - '0';

        sum += converted * pow(5, i);
    }

    bool matches = false;
    int repeats = 0;

    for (int i = 0; i < text.length(); i++) {
        const std::string sliced = text.substr(i, toFind.length());
        int fragmentSum = 0;

        for (int i = sliced.length() - 1; i >= 0; i--) {
            const int converted = sliced[i] - '0';

            fragmentSum += converted * pow(5, i);
        }

        if (fragmentSum == sum) {
            matches = true;
            repeats++;
        }
    }

    matches ? std::cout << "Znaleziono!\n" : std::cout << "Nie znaleziono.\n";
    matches && std::cout << "Powtorzenia: " << repeats;
}
