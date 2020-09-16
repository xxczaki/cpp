#include <iostream>

int nwd(int a, int b) {
    if (b != 0)
        return nwd(b, a % b);

    return a;
}

int main() {
    std::cout << nwd(13, 17);
}