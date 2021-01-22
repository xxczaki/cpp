#include <algorithm>
#include <iostream>

int min(int arr[], int currentIndex, int n) {
    int min = n;

    while (currentIndex < n) {
        if (arr[currentIndex] < arr[min])
            min = currentIndex;

        currentIndex++;
    }

    return min;
}

void sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        std::swap(arr[i], arr[min(arr, i, n)]);
    }
}

int main() {
    int arr[8] = {0, 11, 6, 3, 5, 5, 1, 10};

    sort(arr, 8);

    for (const auto &value : arr) {
        std::cout << value << " ";
    }
}
