#include <algorithm>
#include <iostream>
#include <unordered_map>

#include "main.hpp"

bool Network::writePost(std::string u, std::string m) {
  return posts.size() < MAX_POSTS and findID(u) != -1 and
         (posts.emplace_back(Post{u, m}), true);
}

bool Network::printTimeline(std::string u) const {
  // breaks when user doesn't exist
  std::list<Profile>::const_iterator user = std::find_if(
      profiles.begin(), profiles.end(),
      [&](const Profile &p) -> bool { return p.getUsername() == u; });
  std::unordered_map<std::string, std::string> m;
  m.insert({user->getUsername(), user->getFullName()});

  for (Profile *p : user->followers) {
    m.insert({p->getUsername(), p->getFullName()});
  }

  for (std::list<Post>::const_reverse_iterator p = posts.rbegin();
       p != posts.rend(); p++) {
    std::unordered_map<std::string, std::string>::const_iterator it =
        m.find(p->username);
    if (it != m.end()) {
      std::cout << it->second;
      std::cout << ": ";
      std::cout << p->message;
      std::cout << std::endl;
    }
  }
  return true;
}
