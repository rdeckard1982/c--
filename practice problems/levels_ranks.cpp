#include <iostream>

int main() {
  // Write code here
  int level = 14;

  if (level >= 1 && level <= 5) {
   std::cout << "🥉 Bronze: Level 1-5";
  } else if (level >= 6 && level <= 10) {
   std::cout << "🥈 Silver: Level 6-10";
  } else if (level >= 11 && level <= 15) {
   std::cout << "🥇 Gold: Level 11-15";
  } else if (level >= 16 && level <= 20) {
   std::cout << "🏅 Platinum: Level 16-20";
  } else if (level >= 21 && level <= 25) {
   std::cout << "💎 Diamond: Level 21 -25";
  }
}
