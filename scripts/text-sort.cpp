#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string text;

    std::cout << "Podaj tekst: ";
    std::cin >> text;

    std::cout << "Wersja nieposortowana: " << text << "\n";

    // W to miejsce mozna dac inny sposob sortowania, ja korzystam z wbudowanego.
    std::sort(text.begin(), text.end());

    std::cout << "Wersja posortowana: " << text;
}
