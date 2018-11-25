#ifndef MAIN_HPP
#define MAIN_HPP

#include <list>
#include <set>
#include <string>

class Profile {
private:
  std::string username;
  std::string dispname;

public:
  Profile(std::string u = "", std::string d = "") : username(u), dispname(d) {}
  std::string getUsername() const { return username; }
  std::string getFullName() const;
  bool operator<(const Profile *a) const;
  void setDisplayName(std::string d) { dispname = d; }
  std::set<Profile *> followers;
  bool follow(Profile *p) { return followers.insert(p).second; }
};

class Network {
private:
  static constexpr int MAX_USERS = 20;
  std::list<Profile> profiles;
  int findID(std::string u) const;

public:
  Network() {}
  bool addUser(std::string u, std::string d);
  bool follow(std::string u1, std::string u2);
  void printDot() const;
};

#endif // MAIN_HPP
