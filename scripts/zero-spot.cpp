#include <iostream>
#include <math.h>
#include <limits>

double fn(double x) {
    return 2 * pow(x, 2) + 3 * x - 5;
}

int main () {
    double p, q;

    std::cout << "Podaj p: ";
    std::cin >> p;
    std::cout << "Podaj q: ";
    std::cin >> p;

    double s = (p + q) / 2;

    while (fn(p) != 0 && fn(q) != 0 && q - p >= std::numeric_limits<double>::epsilon()) {
        if (fn(p) * fn(q) > 0) {
            p = s;
        } else {
            q = s;
        }
    }

    if (fn(p) == 0) {
        std::cout << "Przyblizone miejsce zerowe to " << p;
    }

    if (fn(q) == 0) {
        std::cout << "Przyblizone miejsce zerowe to " << q;
    }

    std::cout << "Przyblizone miejsce zerowe to " << s;
}
