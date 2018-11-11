#ifndef MAIN_HPP
#define MAIN_HPP

#include <cassert>
#include <fstream>
#include <vector>

std::vector<std::vector<int> > readImage();
void writeImage(std::vector<std::vector<int> >& muhimage, const std::string& muhfile);
void invert(std::vector<std::vector<int> >& muhimage);
void invert_half(std::vector<std::vector<int> >& muhimage);

#endif // MAIN_HPP

