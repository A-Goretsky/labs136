#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>

using namespace std;
double east_storage(string dateIn);
int test_format(string dateIn);

int main() {
  cout << east_storage("12/12/2016") << endl;
  cout << east_storage("02/15/2018") << endl;
  return 0;
}

//NOT WRITTEN YET, WILL JUST RETURN TRUE.
int test_format(string dateIn) {
  return 1;
}

double east_storage(string dateIn) {
  if (!test_format(dateIn)) {
    cerr << "Date is formatted improperly" << endl;
  }

  ifstream f("Current_Reservoir_Levels.tsv");
  if (f.fail()) {
    cerr << "File cannot be opened for reading" << endl;
  }

  string junk;
  getline(f, junk);

  string date;
  double east_st, east_el, west_st, west_el;

  while(f >> date >> east_st >> east_el >> west_st >> west_el) {
    if (dateIn == date) {
      return east_st;
    }
  }
  return 0.0;
  f.close();
}
