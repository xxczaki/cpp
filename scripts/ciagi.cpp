#include <iostream>

int main() {
    int l, n, arr[l];

    std::cout << "Podaj rozmiar tablicy: ";
    std::cin >> l;
    std::cout << "Podaj ciag liczb: ";

    for (int i = 0; i < l; i++) {
        std::cin >> arr[i];
    }

    bool m = false, r = false, s = false;

    for (int i = 0; i < l - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            m = true;
        } else if (arr[i] < arr[i + 1]) {
            r = true;
        } else if (arr[i] == arr[i + 1]) {
            s = true;
        }
    }

    if (m && r) {
        std::cout << "\nCiag jest niemonotoniczny!";
        return 0;
    }

    std::cout << "\nCiag jest: \n";
    (m && s) && std::cout << "- niemalejacy\n";
    m&& std::cout << "- malejacy\n";
    (r && s) && std::cout << "- nierosnacy\n";
    r&& std::cout << "- rosnacy\n";
    (s && !r && !m) && std::cout << "- staly\n";
}
