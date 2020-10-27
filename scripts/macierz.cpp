#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string first;
    std::string second;
    std::string third;

    std::cout << "Podaj pierwszy wiersz macierzy: ";
    std::cin >> first;
    std::cout << "Podaj drugi wiersz macierzy: ";
    std::cin >> second;
    std::cout << "Podaj trzeci wiersz macierzy: ";
    std::cin >> third;

    std::vector<int> fst;
    std::vector<int> snd;
    std::vector<int> trd;

    for (char &c : first) {
        fst.push_back(c - '0');
    }

    for (char &c : second) {
        snd.push_back(c - '0');
    }

    for (char &c : third) {
        trd.push_back(c - '0');
    }

    for (int i = 0; i < 3; i++) {
        std::cout << trd[i] << " " << snd[i] << " " << fst[i] << " "
                  << "\n";
    }
}
