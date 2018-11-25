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

struct Post {
  std::string username;
  std::string message;
};

class Network {
private:
  static constexpr int MAX_USERS = 20;
  static constexpr int MAX_POSTS = 100;
  std::list<Profile> profiles;
  std::list<Post> posts;
  int findID(std::string u) const;

public:
  Network() {}
  bool addUser(std::string u, std::string d);
  bool follow(std::string u1, std::string u2);
  void printDot() const;
  bool writePost(std::string u, std::string m);
  bool printTimeline(std::string u) const;
};

#endif // MAIN_HPP
