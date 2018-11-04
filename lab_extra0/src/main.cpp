#include <iostream>

#include "main.hpp"

#define GRN(x) "\x1B[32m" x "\x1B[0m"
#define MUHDICT "0"

const std::array<std::string, 10> a = {
  "While he waited at the train station, Joe realized that the train was late.",
  "Joe waited for the train.",
  "The train was late.",
  "Mary and Samantha took the bus.",
  "I looked for Mary and Samantha at the bus station.",
  "Mary and Samantha arrived at the bus station early and waited until noon for the bus.",
  "Joe waited for the train, but the train was late.",
  "I looked for Mary and Samantha at the bus station, but they arrived at the station before noon and left on the bus before I arrived.",
  "Mary and Samantha arried at the bus station before noon, and they left on the bus before I arrived.",
  "Mary and Samantha left on the bus before I arrived, so I did not see them at the bus station."
};

int main() {
  std::cout << GRN("Task A");
  std::cout << std::endl;
  std::cout << "File: words";
  std::cout << std::endl;
  std::fstream muhstream(MUHDICT);
  std::map<char, double> dict = popvec(muhstream);
  std::cout << std::endl;
  for (std::string s : a) {
    std::cout << "Original: ";
    std::cout << s;
    std::cout << std::endl;
    for (int i = 0; i < 26; i++) {
      std::cout << "Shifted ";
      std::cout << i;
      std::cout << " | ";
      std::string muhstring = encryptCaesar(s, i);
      std::cout << muhstring;
      std::cout << std::endl;

      std::cout << "Guess: ";
      std::cout << guess(muhstring, dict);
      std::cout << " | ";
      std::cout << guesss(encryptCaesar(s, i), dict);
      std::cout << std::endl;
    }

    std::cout << std::endl;
  }

  return 0;
}

