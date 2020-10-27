#include <algorithm>
#include <iostream>
#include <random>

int main() {
    // Generowanie liczb losowych
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(-10, 23);

    int arr[10];
    int n, sum, mul = 1;

    // Dodawanie elementów do tablicy
    while (n <= 10) {
        std::fill(std::begin(arr), std::begin(arr) + 10, distr(gen));
        n++;
    }

    // Sumowanie elementów tablicy i obliczanie iloczynu dla liczb < 6
    for (auto const& value : arr) {
        sum += value;
        mul *= (value > 6 ? value : 1);
    }

    std::cout << "Suma elementow: " << sum << "\n";
    std::cout << "Iloraz elementow mniejszych, niz 6: " << (mul == 1 ? 0 : mul);
}
