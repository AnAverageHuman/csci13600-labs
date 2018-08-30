#include <iostream>

[[noreturn]] void myexit(unsigned int val) {
  std::cout << val;
  std::cout << " days";
  std::cout << std::endl;
  exit(0);
}

int main() {
  std::cout << "Enter year: ";
  int year;
  std::cin >> year;

  std::cout << "Enter month: ";
  int month;
  std::cin >> month;
  std::cout << std::endl;

  if (month == 2) {
    if (year % 4 != 0) {
      myexit(28);
    }

    if (year % 100 != 0) {
      myexit(29);
    }

    if (year % 400 != 0) {
      myexit(28);
    }

    myexit(29);
  }

  if (month < 8) {
    myexit(month % 2 == 0 ? 30 : 31);
  } else {
    myexit(month % 2 == 0 ? 31 : 30);
  }

  return 0;
}

