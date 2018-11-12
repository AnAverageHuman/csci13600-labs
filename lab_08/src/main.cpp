#include <iostream>
#include <thread>

#include "main.hpp"

int main() {
  std::vector<std::vector<int> > a = readImage();
  std::vector<std::vector<int> > b = a;
  std::vector<std::vector<int> > c = a;
  std::vector<std::vector<int> > d = a;
  std::vector<std::vector<int> > e = a;
  std::vector<std::vector<int> > f = a;

  invert(a);
  std::thread t1(writeImage, std::ref(a), "invert.pgm");

  invert_half(b);
  std::thread t2(writeImage, std::ref(b), "inverthalf.pgm");

  box(c);
  std::thread t3(writeImage, std::ref(c), "box.pgm");

  frame(d);
  std::thread t4(writeImage, std::ref(d), "frame.pgm");

  scale(e);
  std::thread t5(writeImage, std::ref(e), "scale.pgm");

  pixelate(f);
  std::thread t6(writeImage, std::ref(f), "pixel.pgm");

  t1.join();
  std::cout << "invert.pgm";
  std::cout << std::endl;

  t2.join();
  std::cout << "inverthalf.pgm";
  std::cout << std::endl;

  t3.join();
  std::cout << "box.pgm";
  std::cout << std::endl;

  t4.join();
  std::cout << "frame.pgm";
  std::cout << std::endl;

  t5.join();
  std::cout << "scale.pgm";
  std::cout << std::endl;

  t6.join();
  std::cout << "pixel.pgm";
  std::cout << std::endl;

  return 0;
}

