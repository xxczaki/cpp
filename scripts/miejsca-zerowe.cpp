#include <iostream>
#include <math.h> 

int delta(int a, int b, int c) {
    return pow(b, 2) - 4 * a * c;
}

int zero(int a, int b, int c) {
	int d = delta(a, b, c);
	
    if (d == 0) {
        return 1;
    } else if (d > 0) {
        return 2;
    } else if (d < 0) {
        return 0;
    }
}

int main() {
	int a,b,c;
	
	std::cout << "Podaj wspolczynnik a: ";
	std::cin >> a;
	std::cout << "Podaj wspolczynnik b: ";
	std::cin >> b;
	std::cout << "Podaj wspolczynnik c: ";
	std::cin >> c;
	
	int amount = zero(a, b, c);
	int d = delta(a, b, c);
	
    std::cout << "Licza miejsc zerowych: " << amount;
    std::cout << "\n\n";
    
    if (amount == 1) {
    	std::cout << "Miejsce zerowe: " -b / 2 * a;
	} else if (amount == 2) {
		std::cout << "Miejsca zerowe: \n";
		std::cout << (-b - sqrt(d)) / 2 * a << "\n";
		std::cout << (-b + sqrt(d)) / 2 * a;
	}
}
