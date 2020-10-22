#include <iostream>
#include <vector>

int main() {
    int n;

    std::cout << "Podaj liczbe: ";
    std::cin >> n;

    std::vector<int> final;

    while (n != 0) {
        const int m = n % 2;

        n = n / 2;
        final.insert(final.begin(), m);
    }

    for (auto i = final.begin(); i != final.end(); ++i) std::cout << *i;
}
