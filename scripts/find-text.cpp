#include <iostream>
#include <string>

int main() {
    std::string text = "KARYKATURA";
    std::string toFind = "KA";
    bool matches = false;
    int repeats = 0;

    for (int i = 0; i < text.length(); i++) {
        if (text.substr(i, toFind.length()) == toFind) {
            matches = true;
            repeats++;
        }
    }

    matches ? std::cout << "Znaleziono!\n" : std::cout << "Nie znaleziono.\n";
    matches && std::cout << "Powtorzenia: " << repeats;
}
