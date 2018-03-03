#include "funcs.hpp"

#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::cout;
using std::endl;

int main() {
  cout << box(3, 4) << endl;
  cout << checkerboard(11, 6) << endl;
  cout << cross(8) << endl;
  cout << lower(6) << endl;
  cout << upper(5) << endl;
  cout << trapezoid(12, 5) << endl;
  cout << trapezoid(12, 6) << endl;
  cout << trapezoid(12, 7) << endl;
  cout << trapezoid(11, 5) << endl;
  cout << trapezoid(11, 6) << endl;
  cout << trapezoid(11, 7) << endl;
  cout << checkerboard33(16, 11) << endl;
  cout << checkerboard33(27, 27) << endl;
}
