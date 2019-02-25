#include "funcs.hpp"

#include <iostream>
#include <string>
#include <sstream>

using std::string;
using std::cout;
using std::endl;

int main() {
  cout << "~~~~ Task A - Box ~~~~\n";
  cout << box(3, 4) << endl;
  cout << box(7, 5) << endl;

  cout << "~~~~ Task B - Checkerboard ~~~~\n";
  cout << checkerboard(11, 6) << endl;
  cout << checkerboard(12, 8) << endl;
  cout << checkerboard(12, 3) << endl;

  cout << "~~~~ Task C - Cross ~~~~\n";
  cout << cross(7) << endl;
  cout << cross(8) << endl;

  cout << "~~~~ Task D - Lower Triangle ~~~~\n";
  cout << lower(9) << endl;
  cout << lower(6) << endl;

  cout << "~~~~ Task E - Upper Triangle ~~~~\n";
  cout << upper(8) << endl;
  cout << upper(5) << endl;

  cout << "~~~~ Task F - Trapezoid ~~~~\n";
  cout << trapezoid(12, 5) << endl;
  cout << trapezoid(12, 6) << endl;
  cout << trapezoid(12, 7) << endl;
  cout << trapezoid(11, 5) << endl;
  cout << trapezoid(11, 6) << endl;
  cout << trapezoid(11, 7) << endl;

  cout << "~~~~ Task G - Checkerboard 3 x 3 ~~~~\n";
  cout << checkerboard33(16, 11) << endl;
  cout << checkerboard33(27, 27) << endl;

  cout << "~~~~ MY TASK - Checkerboard x by x ~~~~\n";
  cout << checkerboard_var(16, 11, 2) << endl;
  cout << checkerboard_var(27, 27, 3) << endl;
  cout << checkerboard_var(16, 11, 4) << endl;
  cout << checkerboard_var(27, 27, 5) << endl;
}
