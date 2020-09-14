#include <iostream>
#include <iomanip>

void printPattern(int size) {
   int i, j, space;

   for (i = 1; i <= size; i++) {
      for (space = i; space < size; space++) {
            std::cout << " ";
      }

      for (j = 1; j <= (2 * size - 1); j++) {
         if (j == 1 || j == 2 * i - 1 || (i == (size + 2) / 2) && i * 2 > j) {
            std::cout << "*"; 
         } else {
            std::cout << " ";
         }
      }

      std::cout << "\n";
   }
}

int main() {
    printPattern(10);
}