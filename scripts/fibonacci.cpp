#include <iostream>

int fibonacci(int n) {
    int a = 0;
    int b = 1;
    int t;

    for (int i = 1; i <= n; i++) {
        t = a + b;
        b = a;
        a = t;
    }

    return a;
}

int main() {
    std::cout << fibonacci(12);
}