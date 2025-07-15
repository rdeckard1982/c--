#include <iostream>

int main() {
  // Write code here
  int month1;
  std::cout << "Enter the value for the first month: ";
  std::cin >> month1;

  int month2;
  std::cout << "Enter the value for the second month: ";
  std::cin >> month2;

  int mom = (month2 -month1)*100/month1;
  std::cout << "The change is "<<mom;
}