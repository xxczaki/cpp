#include <iostream>
#include <random>

// Uwaga - wymagany kompilator ze wsparciem dla C++ >= 11
int main() {
    // Generowanie liczb losowych
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 1000);

    int n, arr[10], min = 1000, minN = 1, max = 0, maxN = 1;

    // Dodawanie elementów do tablic
    while (n < 10) {
        arr[n] = distr(gen);

        n++;
    }

    for (const auto &value : arr) {
        if (value < min) {
            min = value;
        } else if (value > max) {
            max = value;
        } else if (value == min) {
            minN++;
        } else if (value == max) {
            maxN++;
        }
    }

    std::cout << "Maksymalna liczba: " << max;
    maxN > 0 ? std::cout << " (powtorzenia: " << maxN << ")\n" : std::cout << "\n";
    std::cout << "Minimalna liczba: " << min;
    minN > 0 ? std::cout << " (powtorzenia: " << minN << ")" : std::cout << "\n";
}
