#include <iostream>
#include <iomanip>

int getSize(int size, int i) {
    if (i < (size / 2)) {
        return (size / 2) - i + 2;
    } else if (i >= (size / 2)) {
        return (size / 2) + (i - size) + 3;
    } else {
        return 0;
    }
}

void printPattern(int size) {
    for (int i = 0; i < size; i++) {
        std::cout << "K" << std::setw(getSize(size, i)) << "K\n";
    }
}

int main() {
    printPattern(10);
}
