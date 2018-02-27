#pragma once

#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <sstream>
#include <iomanip>


using std::string;
using std::ifstream;
using std::getline;
using std::cout;
using std::endl;
using std::cerr;
using std::vector;
using std::find;

double east_storage(string dateIn);
int test_format(string dateIn);
double min_east();
double max_east();
string compare(string start_date, string end_date);
string reverse_order(string low_date, string end_date);
