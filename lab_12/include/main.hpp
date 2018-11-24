#ifndef MAIN_HPP
#define MAIN_HPP

#include <list>
#include <string>

class Profile {
private:
  std::string username;
  std::string dispname;

public:
  Profile(std::string u = "", std::string d = "") : username(u), dispname(d){};
  std::string getUsername() const { return username; };
  std::string getFullName() const;
  void setDisplayName(std::string d) { dispname = d; };
};

class Network {
private:
  static constexpr int MAX_USERS = 20;
  std::list<Profile> profiles;
  int findID(std::string u) const;

public:
  Network(){};
  bool addUser(std::string u, std::string d);
};

#endif // MAIN_HPP
