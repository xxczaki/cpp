#include <iostream>

int main() {
    int arr[8] = {0, 11, 6, 6, 3, 5, 1, 10};

    // Rozmiar tablicy tymczasowej (k) to max - min + 1, w tym przypadku 11 - 0 + 1 = 12
    int i, n = 8, k = 12, temp[k], final[n];

    // Wypełniamy tablicę tymczasową zerami.
    for (i = 0; i < k; i++) {
        temp[i] = 0;
    }

    // Obliczamy liczbe wystapien danego elementu.
    for (int i = 0; i < n; i++) {
        temp[arr[i]]++;
    }

    // Obliczamy pozycje elementu w tablicy końcowej.
    for (i = 1; i < k; i++) {
        temp[i] += temp[i- 1];
    }

    // Wypełniamy tablicę końcową (posortowaną).
    for (i = n - 1; i >= 0; i--) {
        final[--temp[arr[i]]] = arr[i];
    }

    // Wypisujemy tablicę końcową.
    for (const auto &value : final) {
        std::cout << value << " ";
    }
}
