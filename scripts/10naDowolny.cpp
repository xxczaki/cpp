#include <iostream>
#include <vector>

int main() {
    int n, k;

    std::cout << "Podaj liczbe w systemie dziesietnym: ";
    std::cin >> n;
    std::cout << "Podaj, na jaki system zamienic liczbe (np. 2 = dwojkowy, 8 = osemkowy): ";
    std::cin >> k;

    std::vector<int> final;

    while (n != 0) {
        const int m = n % k;

        n = n / k;
        final.insert(final.begin(), m);
    }

    for (auto i = final.begin(); i != final.end(); ++i) std::cout << *i;
}
