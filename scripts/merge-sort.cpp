#include <iostream>

// Laczymy 2 tablice w jedna
void merge(int arr[], int l, int m, int r) {
    int firstLength = m - l + 1;
    int secondLength = r - m;

    // Tworzymy 2 tablice, do ktorych rozdzielimy glowna tablice.
    int first[firstLength], second[secondLength];

    // Rozdzialamy glowna tablice do dwoch.
    for (int i = 0; i < firstLength; i++)
        first[i] = arr[l + i];
    for (int j = 0; j < secondLength; j++)
        second[j] = arr[m + 1 + j];

    // Indeksy pierwszej, drugiej i koncowej tablicy.
    int i = 0, j = 0, k = l;

    // Jezeli obecny indeks pierwszej i drugiej tablicy jest mniejszy, niz dlugosci tych tablic, to dodaj elementy z tych tablic to koncowej tablicy.
    while (i < firstLength && j < secondLength) {
        if (first[i] <= second[j]) {
            arr[k] = first[i];
            i++;
        } else {
            arr[k] = second[j];
            j++;
        }

        k++;
    }

    // Jezeli w pierwszej tablicy pozostaly jeszcze jakies elementy - przenosimy je do tablicy koncowej.
    while (i < firstLength) {
        arr[k] = first[i];
        i++;
        k++;
    }

    // Jezeli w drugiej tablicy pozostaly jeszcze jakies elementy - przenosimy je do tablicy koncowej.
    while (j < secondLength) {
        arr[k] = second[j];
        j++;
        k++;
    }
}


// Sortowanie przez scalanie
void sort(int arr[], int l, int r){
    // Jezeli obecny indeks pierwszej tablicy jest wiekszy, niz obecny indeks drugiej tablicy, kontynuuj sortowanie.
    if (l < r) {
        int m = (l + r - 1) / 2;

        sort(arr, l, m);
        sort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

// Driver code
int main()
{
    const int n = 10;

    int arr[n] = {13, 3, 11, 10, 11, 1, 0, 0, 2, 5};

    std::cout << "Tablica: \n";

    for (const auto &value: arr) {
        std::cout << value << " ";
    }

    sort(arr, 0, n - 1);

    std::cout << "\nTablica posortowana: \n";

    for (const auto &value: arr) {
        std::cout << value << " ";
    }
}
