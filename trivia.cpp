#include <iostream>

int main() {
  // Write code here
  int q1, q2, q3, q4, q5, points;

  std::cout << "Q1) What is the name of the world's longest river? 💧\n";
  std::cout << "1) Missouri River\n";
  std::cout << "2) Nile\n";
  std::cout << "3) Amazon River\n";
  std::cout << "4) Yangtze River\n";
  std::cout << "\n";
  std::cout << "Enter your answer: ";
  std::cin >> q1;

  if (q1 == 2){
    points++;
    std::cout << "Correct! You've earned 1 point. <3\n";
    std::cout << "\n";
  } else {
    std::cout << "Incorrect! The correct answer is 2) Nile.\n";
    std::cout << "\n";
  }

 std::cout << "Q2) How many bones are in the human body? 🦴\n";
  std::cout << "1) 92\n";
  std::cout << "2) 150\n";
  std::cout << "3) 206\n";
  std::cout << "4) 10\n";
  std::cout << "\n";
  std::cout << "Enter your answer: ";
  std::cin >> q2;

  if (q2 == 3){
    points++;
    std::cout << "Correct! You've earned 1 point. <3\n";
    std::cout << "\n";
  } else {
    std::cout << "Incorrect! The correct answer is 3) 206.\n";
    std::cout << "\n";
  }

  std::cout << "Your scores:" << points;
}


