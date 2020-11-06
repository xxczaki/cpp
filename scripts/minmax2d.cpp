#include <iostream>
#include <random>

// Uwaga - wymagany kompilator ze wsparciem dla C++ >= 11
int main() {
    // Generowanie liczb losowych
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 1000);

    int n, l, temp[10], arr[10][10];

    // Dodawanie elementów do tablic
    while (n < 10) {
        while (l < 10) {
            arr[n][l] = distr(gen);
            l++;
        }

        n++;
        l = 0;
    }

    int min = 1000, minN = 0, max = 0, maxN = 0;

    for (auto const& snd : arr) {
        for (auto const& value : snd) {
            if (value > max) {
                max = value;
            } else if (value == max) {
                maxN++;
            } else if (value < min) {
                min = value;
            } else if (value == min) {
                minN++;
            }
        }
    }

    std::cout << "Najwieksza wartosc: " << max;
    maxN > 0 ? std::cout << " (ilosc powtorzen: " << maxN << ")\n" : std::cout << "\n";
    std::cout << "Najmniejsza wartosc: " << min;
    minN > 0 && std::cout << " (ilosc powtorzen: " << minN << ")";
}
