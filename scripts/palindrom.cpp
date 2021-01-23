#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string word, reversed;

    std::cout << "Podaj wyraz: ";
    std::cin >> word;

    reversed = word;

    std::reverse(reversed.begin(), reversed.end());

    if (word == reversed) {
        std::cout << "Jest to palindrom.";
    } else {
        std::cout << "Nie jest to palindrom.";
    }
}
