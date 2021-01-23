#include <iostream>

int nwd(int a, int b) {
    if (b != 0)
        return nwd(b, a % b);

    return a;
}

int nww(int a, int b) {
    if (b != 0)
        return nww(b, a / b);

    return a;
}

int main() {
    std::cout << nww(13, 17);
}
