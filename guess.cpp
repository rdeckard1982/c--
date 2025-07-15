#include <iostream>

int main() {
  // Write code here
  int guess;
  std::cout << "Guess the number: ";
  std::cin >> guess;

  while (guess != 64){
    std::cout << "Guess the number: ";
    std::cin >> guess;
  }

  std::cout << "You guessed it correct!";
}
