#include <iostream>

int main() {
  // Write code here
  for (int i = 1; i <= 100; i++){
    if (i % 3 == 0 && i % 5 == 0){
      std::cout << "FizzBuzz\n";
    } else if (i % 3 == 0){
      std::cout << "Fizz\n";
    } else if (i % 5 == 0){
      std::cout << "Buzz\n";
    } else {
      std::cout << i<< "\n";
    }
  }
}
