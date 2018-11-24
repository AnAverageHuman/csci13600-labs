#include <algorithm>
#include <cctype>

#include "main.hpp"

int Network::findID(std::string u) const {
  std::list<Profile>::const_iterator it = profiles.begin();
  int i = 0;
  for (; it != profiles.end(); it++, i++) {
    if (it->getUsername() == u) {
      return i;
    }
  }

  return -1;
}

bool Network::addUser(std::string u, std::string d) {
  return profiles.size() < MAX_USERS and
         std::find_if_not(u.begin(), u.end(),
                          [](char c) { return isalnum(c); }) == u.end() and
         findID(u) == -1 and
         (static_cast<void>(profiles.emplace_back(Profile{u, d})), true);
}
