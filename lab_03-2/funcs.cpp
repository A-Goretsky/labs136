#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include "ashokan.h"

using std::string;
using std::ifstream;
using std::getline;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::find;


int reverse_order(string low_date, string high_date) {
  ifstream f("Current_Reservoir_Levels.tsv");
  if (f.fail()) {
    cerr << "File cannot be opened for reading." << endl;
  }
  string junk;
  getline(f, junk);

  string date;
  double east_st, east_el, west_st, west_el;

  vector <string> date_storage;
  vector <double> westel_storage;
  while (f >> date >> east_st >> east_el >> west_st >> west_el) {
    date_storage.push_back(date);
    westel_storage.push_back(west_el);
  }
  int high_index = std::distance(date_storage.begin(), std::find(date_storage.begin(), date_storage.end(), high_date));
  int low_index = std::distance(date_storage.begin(), std::find(date_storage.begin(), date_storage.end(), low_date));

  for (int i = high_index; i >= low_index; i--) {
    cout << date_storage[i] << " " << westel_storage[i] << " ft" << endl;
  }
  return 0;
}

int compare(string start_date, string end_date) {
  ifstream f("Current_Reservoir_Levels.tsv");
  if (f.fail()) {
    cerr << "File cannot be opened for reading." << endl;
  }
  string junk;
  getline(f, junk);

  string date;
  double east_st, east_el, west_st, west_el;

  while (f >> date >> east_st >> east_el >> west_st >> west_el) {
    if (date == start_date) {
      while (date != end_date) {
        if (east_el == west_el) {
          cout << date <<  " " << "Equal" << endl;
        }
        else if (east_el < west_el) {
          cout << date << " " << "West" << endl;
        }
        else {
          cout << date << " " << "East" << endl;
        }
        f >> date >> east_st >> east_el >> west_st >> west_el;
      }
      if (date == end_date) {
        if (east_el == west_el) {
          cout << date <<  " " << "Equal" << endl;
        }
        else if (east_el < west_el) {
          cout << date << " " << "West" << endl;
        }
        else {
          cout << date << " " << "East" << endl;
        }
      }
      return 0;
    }
  }
  return 0;
}

void minmax() {
  ifstream f("Current_Reservoir_Levels.tsv");
  if (f.fail()) {
    cerr << "File cannot be opened for reading." << endl;
  }

  string junk;
  getline(f, junk);

  string date;
  double east_st, east_el, west_st, west_el;
  double min = 0.0;
  double max = 0.0;

  f >> date >> east_st >> east_el >> west_st >> west_el;
  max = east_st;
  min = east_st; //Initial read/write
  while (f >> date >> east_st >> east_el >> west_st >> west_el) {
    if (east_st < min) {
      min = east_st;
    }
    if (east_st > max) {
      max = east_st;
    }
  }
  cout << "Minimum Storage in East basin: " << min << " billion gallons" << endl;
  cout << "Maximum Storage in East basin: " << max << " billion gallons" << endl;
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
    cerr << "File cannot be opened for reading." << endl;
  }

  string junk;
  getline(f, junk);

  string date;
  double east_st, east_el, west_st, west_el;

  while(f >> date >> east_st >> east_el >> west_st >> west_el) {
    if (dateIn == date) {
      f.close();
      return east_st;
    }
  }
  f.close();
  return 0.0;
}
