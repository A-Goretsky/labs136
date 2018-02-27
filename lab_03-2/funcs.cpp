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


string reverse_order(string low_date, string high_date) {
  std::ostringstream res_string;

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
    res_string << date_storage[i] << " " << westel_storage[i] << " ft" << endl;
  }
  return res_string.str();
}

string compare(string start_date, string end_date) {
  std::ostringstream res_string;

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
          res_string << date <<  " " << "Equal" << endl;
        }
        else if (east_el < west_el) {
          res_string << date << " " << "West" << endl;
        }
        else {
          res_string << date << " " << "East" << endl;
        }
        f >> date >> east_st >> east_el >> west_st >> west_el;
      }
      if (date == end_date) {
        if (east_el == west_el) {
          res_string << date <<  " " << "Equal" << endl;
        }
        else if (east_el < west_el) {
          res_string << date << " " << "West" << endl;
        }
        else {
          res_string << date << " " << "East" << endl;
        }
      }
      return res_string.str();
    }
  }
  return res_string.str();
}

double min_east() {
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
  min = east_st; //Initial read/write
  while (f >> date >> east_st >> east_el >> west_st >> west_el) {
    if (east_st < min) {
      min = east_st;
    }
  }
  return min;
}


double max_east() {
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
  max = east_st; //Initial read/write
  while (f >> date >> east_st >> east_el >> west_st >> west_el) {
    if (east_st > max) {
      max = east_st;
    }
  }
  return max;
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
