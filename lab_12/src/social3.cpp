#include <functional>
#include <iostream>
#include <sstream>
#include <tuple>

#include "main.hpp"

bool Network::follow(std::string u1, std::string u2) {
  Profile *p1 = NULL;
  Profile *p2 = NULL;
  std::list<Profile>::iterator it = profiles.begin();
  for (; it != profiles.end(); it++) {
    if (it->getUsername() == u1) {
      p1 = &*it;
    }

    if (it->getUsername() == u2) {
      p2 = &*it;
    }
  }

  return p1 and p2 and p1->follow(p2);
}

static std::string quoteU(const Profile *a, const Profile *b = NULL) {
  return "\"@" + a->getUsername() + '"' + (b ? " -> " + quoteU(b) : "\n");
}

void Network::printDot() const {
  std::cout << "digraph {";
  std::cout << std::endl;
  std::function<void(std::list<Profile>::const_iterator)> f =
      [&](std::list<Profile>::const_iterator it) -> void {
    if (it == profiles.end()) {
      return;
    }
    std::cout << quoteU(&*it);
    f(++it);
    for (Profile *p : (--it)->followers) {
      std::cout << quoteU(&*it, p);
    }
  };
  f(profiles.begin());
  std::cout << "}";
  std::cout << std::endl;
}
