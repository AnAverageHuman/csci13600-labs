#include <iostream>

#include "main.hpp"

#define GRN(x) "\x1B[32m" x "\x1B[0m"

int main() {
  std::cout << GRN("Task A");
  std::cout << std::endl;
  Profile p1("marco", "Marco");
  std::cout << p1.getUsername() << std::endl;
  std::cout << p1.getFullName() << std::endl;
  p1.setDisplayName("Marco Rossi");
  std::cout << p1.getUsername() << std::endl;
  std::cout << p1.getFullName() << std::endl;
  Profile p2("tarma1", "Tarma Roving");
  std::cout << p2.getUsername() << std::endl;
  std::cout << p2.getFullName() << std::endl;
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task B");
  std::cout << std::endl;
  Network nw;
  std::cout << nw.addUser("mario", "Mario") << std::endl;
  std::cout << nw.addUser("luigi", "Luigi") << std::endl;
  std::cout << nw.addUser("mario", "Mario2") << std::endl;
  std::cout << nw.addUser("mario 2", "Mario2") << std::endl;
  std::cout << nw.addUser("mario-2", "Mario2") << std::endl;
  for (int i = 2; i < 20; i++)
    std::cout << nw.addUser("mario" + std::to_string(i),
                            "Mario" + std::to_string(i))
              << std::endl;
  std::cout << nw.addUser("yoshi", "Yoshi") << std::endl;
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task C");
  std::cout << std::endl;
  Network nw2;
  nw2.addUser("mario", "Mario");
  nw2.addUser("luigi", "Luigi");
  nw2.addUser("yoshi", "Yoshi");
  nw2.follow("mario", "luigi");
  nw2.follow("mario", "yoshi");
  nw2.follow("luigi", "mario");
  nw2.follow("luigi", "yoshi");
  nw2.follow("yoshi", "mario");
  nw2.follow("yoshi", "luigi");
  nw2.addUser("wario", "Wario");
  for (int i = 2; i < 6; i++) {
    std::string usrn = "mario" + std::to_string(i);
    std::string dspn = "Mario " + std::to_string(i);
    nw2.addUser(usrn, dspn);
    nw2.follow(usrn, "mario");
  }
  nw2.follow("mario2", "luigi");
  nw2.printDot();
  std::cout << std::endl;

  std::cout << std::endl;
  std::cout << GRN("Task D");
  std::cout << std::endl;
  Network nw3;
  nw3.addUser("mario", "Mario");
  nw3.addUser("luigi", "Luigi");
  nw3.addUser("yoshi", "Yoshi");
  nw3.follow("mario", "luigi");
  nw3.follow("luigi", "mario");
  nw3.follow("luigi", "yoshi");
  nw3.follow("yoshi", "mario");
  nw3.writePost("mario", "It's a-me, Mario!");
  nw3.writePost("luigi", "Hey hey!");
  nw3.writePost("mario", "Hi Luigi!");
  nw3.writePost("yoshi", "Test 1");
  nw3.writePost("yoshi", "Test 2");
  nw3.writePost("luigi", "I just hope this crazy plan of yours works!");
  nw3.writePost("mario", "My crazy plans always work!");
  nw3.writePost("yoshi", "Test 3");
  nw3.writePost("yoshi", "Test 4");
  nw3.writePost("yoshi", "Test 5");
  std::cout << std::endl;
  std::cout << "======= Mario's timeline =======" << std::endl;
  nw3.printTimeline("mario");
  std::cout << std::endl;

  std::cout << "======= Yoshi's timeline =======" << std::endl;
  nw3.printTimeline("yoshi");
  std::cout << std::endl;

  return 0;
}
