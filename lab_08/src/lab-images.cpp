#include "main.hpp"

#define MUHIMAGE "inImage.pgm"

std::vector<std::vector<int> > readImage() {
  std::ifstream muhstream(MUHIMAGE);

  char junk = ' ';
  int ijunk;
  // read the header P2
  muhstream >> junk;
  assert(junk == 'P');
  muhstream >> junk;
  assert(junk == '2');

  size_t width;
  size_t height;

  muhstream >> width;
  muhstream >> height;
  muhstream >> ijunk;

  std::vector<std::vector<int> > ret;

  for (size_t i = 0; i < height; i++) {
    ret.emplace_back(std::vector<int>());
    for (size_t _ = 0; _ < width; _++) {
      int k;
      muhstream >> k;
      ret[i].push_back(k);
    }
  }

  muhstream.close();
  return ret;
}

void writeImage(std::vector<std::vector<int> >& muhimage, const std::string& muhfile) {
  std::ofstream muhstream(muhfile);

  muhstream << "P2";
  muhstream << std::endl;
  muhstream << muhimage[0].size();
  muhstream << std::endl;
  muhstream << muhimage.size();
  muhstream << std::endl;
  muhstream << "255";
  muhstream << std::endl;

  for (size_t i = 0; i < muhimage.size(); i++) {
    for (size_t j = 0; j < muhimage[0].size(); j++) {
      muhstream << muhimage[i][j];
      muhstream << std::endl;
    }
  }

  muhstream.close();
}

