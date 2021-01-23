#include <iostream>
#include <math.h>

double find(double p, int l) {
    double a = p;
    int i = 0;

    while (abs(a - (p / a)) > std::numeric_limits<double>::epsilon() && i < l) {
        a = 0.5 * (a + (p / a));
        i++;
    }

    return a;
}

int main() {
    double p;
    int l;

    std::cout << "Podaj liczbe: ";
    std::cin >> p;
    std::cout << "Podaj dokladnosc: ";
    std::cin >> l;

    std::cout << find(p, l);
}
