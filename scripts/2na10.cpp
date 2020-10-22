#include <math.h>

#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string n;
    int sum = 0;

    std::cout << "Podaj liczbe: ";
    std::cin >> n;

    std::vector<int> vec;

    // Konwersja std::string => std::vector<int>
    // Przykład: 101 => {1, 0, 1}
    for (char const c : n) {
        vec.insert(vec.begin(), c - '0');
    }

    // Każdy element wektora mnożymy przez 8^i
    // Gdzie i to pozycja elementu w wektorze
    for (std::size_t i = 0; i != vec.size(); ++i)
        vec[i] = vec[i] * pow(2, i);

    // Sumowanie elementów wektora
    for (auto& n : vec)
        sum += n;

    std::cout << sum;
}
