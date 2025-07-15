#include <iostream>
#include <cstdio>
#include <cstdlib>

int main() {
  // Write code here
  srand(time(NULL));

  int fortune = std::rand() % 7;

  if (fortune == 1){
    std::cout << "🥠 Don't pursue happiness - create it.";
  } else if (fortune == 2){
    std::cout << "🥠 All things are difficult before they are easy.";
  } else if (fortune == 3){
    std::cout << "🥠 The early bird gets the worm, but the second mouse gets the cheese.";
  } else if (fortune == 4){
    std::cout << "🥠 Someone in your life needs a letter from you.";
  } else if (fortune == 5){
    std::cout << "🥠 The fortune you search for is in another cookie.";
  } else if (fortune == 6){
    std::cout << "🥠 Help! I'm being held prisoner in a Chinese bakery!";
  }
}
