#include <iostream>
#include <algorithm>

int main() {
    const int n = 8;
    const int m = n / 2;
    const int bucket = n % 2 == 0 ? 2 : 3;

    int arr[n] = {0, 11, 6, 4, 3, 5, 1, 10}, *chunked[m];

    // Podział tablicy na kubełki o rownej ilości elementow.
    for (int i = 0; i < m; i++) {
        chunked[i] = &arr[i * 2];
    }

    // Sortowanie liczb w kubełkach.
    for (int i = 0; i < m; i++) {
        std::sort(std::begin(chunked[i]), std::end(chunked[i]));
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < bucket; j++) {
            std::cout << chunked[i][j] << " ";
        }
    }
}

