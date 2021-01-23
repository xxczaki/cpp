#include <iostream>
#include <math.h>

void sort(int arr[], int start, int end){
    int i = start;
    int j = end;
    int final = arr[(start + end) >> 1];

    while (i <= j) {
        while (arr[i] < final)
            i++;
        while (arr[j] > final)
            j--;

        if (i <= j){
            int temp = arr[i];

            arr[i] = arr[j];
            arr[j] = temp;

            i++;
            j--;
        }
    }

    if (start < j)
        sort(arr, start, j);
    if (end > i)
        sort(arr, i, end);
}

int main() {
    int arr[8] = {0, 11, 6, 4, 3, 5, 1, 10};

    sort(arr, 0, 7);

    for (const auto &value : arr) {
        std::cout << value << " ";
    }
}
