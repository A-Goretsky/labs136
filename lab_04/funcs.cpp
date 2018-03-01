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
    for (int y = size; y >= 1; y--) {
      //res << y;
      if ((size - y) == size / y) {
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
  for (int x = 1; x < length; x++) {
    for (int y = 1; y < length; y++) {
      if (x == length % y) {
        res << " ";
      }
      else {
        res << "*";
      }
    }
    res << "\n";
  }
  return res.str();
}

string trapezoid(int width, int height) {
  std::ostringstream res;
  for (int x = 0; x < height; x++) {
    for (int y = 0; y < width; y++) {
      
    }
  }
  return res.str();
}
