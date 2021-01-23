#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string first, second;

    std::cout << "Podaj wyraz pierwszy: ";
    std::cin >> first;
    std::cout << "Podaj wyraz drugi: ";
    std::cin >> second;

    std::sort(first.begin(), first.end());
    std::sort(second.begin(), second.end());

    if (first == second) {
        std::cout << "Wyraz pierwszy jest anagramem wyrazu drugiego.";
    } else {
        std::cout << "Wyraz pierwszy nie jest anagramem wyrazu drugiego.";
    }
}
