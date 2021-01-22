#include <iostream>

void sort(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int inserted = arr[i];
        int j = i - 1;

        while (j > 0 && arr[j] > inserted) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = inserted;
    }
}

int main() {
    int arr[8] = {0, 11, 6, 4, 3, 5, 1, 10};

    sort(arr, 8);

    for (const auto &value : arr) {
        std::cout << value << " ";
    }
}
