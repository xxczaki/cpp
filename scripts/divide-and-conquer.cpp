#include <iostream>

int max(int a, int b) {
    if (a >= b)
        return a;

    return b;
}

int min(int a, int b) {
    if (a <= b)
        return a;

    return b;
}

int findMin(int arr[], int n) {
    if (n == 1)
        return arr[0];

    return min(arr[n - 1], findMin(arr, n - 1));
}

int findMax(int arr[], int n) {
    if (n == 1)
        return arr[0];

    return max(arr[n - 1], findMax(arr, n - 1));
}

int main() {
    int arr[10] = {13, 3, 11, 10, 11, 1, 0, 0, 2, 5};

    std::cout << "Tablica:\n";

    for (const auto &value: arr) {
        std::cout << value << " ";
    }

    std::cout << "\n\nWartosc minimalna: " << findMin(arr, 10) << ".";
    std::cout << "\nWartosc maksymalna: " << findMax(arr, 10) << ".";
}
