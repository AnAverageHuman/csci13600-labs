#ifndef MAIN_HPP
#define MAIN_HPP

#include <string>

class Profile {
private:
  std::string username;
  std::string dispname;

public:
  Profile(std::string u = "", std::string d = "") : username(u), dispname(d) {}
  std::string getUsername() const { return username; }
  std::string getFullName() const;
  void setDisplayName(std::string d) { dispname = d; }
};

#endif // MAIN_HPP
