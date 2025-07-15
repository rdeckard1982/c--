#include <iostream>

int main() {
  // Write code here
  int age = 18;
  bool citizen = false;
  bool registered = false;

  if (age >= 18 and citizen == true and registered == true) {
    std::cout << "You can vote!";
  } else if (age < 18 and citizen == true and registered == true) {
    std::cout << "You are not old enough to vote.";
  } else if (age >= 18 and citizen == false and registered == true) {
    std::cout << "You are not eligible to vote.";
  } else if (age >= 18 and citizen == true and registered == false) {
    std::cout << "You need to register first";
  } else {
    std::cout << "You have not met the requirements";
  }
}
