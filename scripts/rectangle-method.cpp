#include <iostream>
#include <math.h>

int fn(double x) {
    return x * x - 4;
}

int main() {
    double p, q, sum = 0;
    int n;

    std::cout << "Podaj poczatek zakresu (p): ";
    std::cin >> p;
    std::cout << "Podaj koniec zakresu (q): ";
    std::cin >> q;
    std::cout << "Podaj liczbe prostokatow (n): ";
    std::cin >> n;

    const double dl = (q - p) / n;

    for (int i = 0; i < n; i++) {
        sum += abs(fn(p + (dl * i) + (dl / 2)));
    }

    std::cout << "Pole wynosi w przyblizeniu " << dl * sum;
}
