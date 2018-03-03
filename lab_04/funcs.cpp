#include "funcs.hpp"

#include <iostream>
#include <string>
#include <sstream>
#include <cmath>

using std::string;
using std::cout;
using std::endl;

string box(int width, int height) {
  std::ostringstream res;
  for (int x = 0; x < height; x++) {
    for (int y = 0; y < width; y++) {
      res << "*";
    }
    res << "\n";
  }
  return res.str();
}

string checkerboard(int width, int height) {
  std::ostringstream res;
  for (int x = 0; x < height; x++) {
    for (int y = 0; y < width; y++) {
      if (x % 2 == 0) {
        if (y % 2 == 0) {
          res << "*";
        }
        else res << " ";
      }
      else {
        if (y % 2 == 0) {
          res << " ";
        }
        else res << "*";
      }
    }
    res << "\n";
  }
  return res.str();
}


string cross(int size) {
  std::ostringstream res;
  for (int x = 1; x < size+1; x++) {
    for (int y = 1; y < size+1; y++) {
      if (y == x || (size - y) == x-1 ) {
        res << "*";
      }
      else {
        res << " ";
      }
    }
    res << "\n";
  }
  return res.str();
}

string lower(int length) {
  std::ostringstream res;
  for (int x = 1; x < length+1; x++) {
    for (int y = 1; y <= x ; y++) {
      res << "*";
    }
    res << "\n";
  }
  return res.str();
}

string upper(int length) {
  std::ostringstream res;
  for (int x = 1; x < length+1; x++) {
    for (int y = 0; y < x-1; y++) {
      res << " ";
    }
    for (int y = x; y < length+1; y++) {
      res << "*";
    }
    res << "\n";
  }
  return res.str();
}

string trapezoid(int width, int height) {
  std::ostringstream res;
  if (width % 2 == 0) {
    if ((width / 2) < height) {
      return "Impossible Shape!\n";
    }
  }
  else {
    if (width / 2 < height - 1) {
      return "Impossible Shape!\n";
    }
  }
  for (int x = 0; x < height; x++) {
    for (int y = 0; y < x; y++) {
      res << " ";
    }
    for (int y = x; y < width - (x); y++) {
      res << "*";
    }
    for (int y = width - (x - 1); y < width; y++) {
      res << " ";
    }
    res << "\n";
  }
  return res.str();
}

string checkerboard33(int width, int height) {
  return "";
}
