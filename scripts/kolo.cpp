#include <iostream>
#include <math.h> 
  
void printPattern(int radius) { 
  for (int i = 0; i <= 2 * radius; i++) { 
  
    for (int j = 0; j <= 2 * radius; j++) { 
      double dist = sqrt((i - radius) * (i - radius) + (j - radius) * (j - radius)); 
  
      if (dist > radius - 0.5 && dist < radius + 0.5) {
        std::cout << "0";
      } else {
        std::cout << " "; 
      }    
    } 
  
    std::cout << "\n"; 
  } 
} 
   
int main() { 
  printPattern(6); 
} 