#include <sstream>

#include "main.hpp"

std::string Profile::getFullName() const {
  std::stringstream s;
  s << dispname;
  s << " (@";
  s << username;
  s << ')';
  return s.str();
}
