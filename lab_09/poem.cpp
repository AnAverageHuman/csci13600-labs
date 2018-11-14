#include <csignal>
#include <iostream>

bool run = true;

std::string * createAPoemDynamically(std::string *p) {
  *p = "Roses are red, violets are blue";
  return p;
}

void b(int c) {
  run = false;
}

int main() {
  signal(SIGINT, b);
  while(run) {
    std::string a;
    std::string *p = &a;
    p = createAPoemDynamically(p);

    // assume that the poem p is not needed at this point

  }
}
