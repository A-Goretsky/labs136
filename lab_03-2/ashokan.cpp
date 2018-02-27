#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <sstream>
#include "ashokan.h"

using std::string;
using std::ifstream;
using std::getline;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::find;


int main() {
  cout << "~~~~East Storage Tests~~~~" << endl;
  cout << east_storage("12/12/2016") << endl;
  cout << east_storage("02/15/2018") << endl;
  cout << "~~~~Min/Max Test~~~~" << endl;
  cout << min_east() << endl;
  cout << max_east() << endl;
  cout << "~~~~Compare Tests~~~~" << endl;
  cout << compare("09/13/2016", "09/17/2016");
  cout << "~~~~Reverse Order Tests~~~~" << endl;
  cout << reverse_order("05/29/2016", "06/02/2016");
  return 0;
}
