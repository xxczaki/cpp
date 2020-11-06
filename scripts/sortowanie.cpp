#include <algorithm>
#include <iostream>

void sort(int arr[], int n) {
    // Jeżeli rozmiar tablicy = 1, nie rób nic.
    if (n == 1)
        return;

    for (int i = 0; i < n - 1; i++) {
        // Jeżeli element z tablicy jest większy od elementu przed nim, przenieś go o 1 miejsce w przód (zamiana miejsc).
        if (arr[i] > arr[i + 1])
            std::swap(arr[i], arr[i + 1]);
    }

    sort(arr, n - 1);
}

int main() {
    int arr[8] = {0, 11, 6, 3, 5, 5, 1, 10};

    sort(arr, 8);

    for (const auto &val : arr) {
        std::cout << val << " ";
    }
}
