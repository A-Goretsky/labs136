/*
Author: Anton Goretsky
Course: CSCI-133
Instructor: Professor Zamansky
Assignment: Lab1D

Prints number of days in any month of any year,
taking into account leap years.
*/

#include <iostream>
#include <string>

using namespace std;
int leap(int year);

int main() {
  //Inputs
  int ans = 31;
  int year, month;
  cout << "Enter year: ";
  cin >> year;
  cout << "Enter month: ";
  cin >> month;

  //Program
  if (month == 2) {
    ans = 28;
    if (leap(year)) {
      ans += 1;
    }
  }
  else {
    int modmonth = month % 7;
    if (modmonth % 2 == 0) {
      ans = 30;
    }
  }

  cout << ans << endl;
}

//Leap Year Helper Function
int leap(int year) {
  int ans = 0;
  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        ans = 1;
      }
      else {
        ans = 0;
      }
    }
    else {
      ans = 1;
    }
  }
  else {
    ans = 0;
  }
  return ans;
}
