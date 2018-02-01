/*
Author: Anton Goretsky
Course: CSCI-133
Instructor: Professor Zamansky
Assignment: Lab1C

Prints "Common Year" if year is as such, and prints "Leap Year"
if year is as such.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  //Inputs
  int year;
  cout << "Enter year: ";
  cin >> year;

  //Program
  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        cout << "Leap Year" << endl;
      }
      else {
        cout << "Common Year" << endl;
      }
    }
    else {
      cout << "Leap Year" << endl;
    }
  }
  else {
    cout << "Common Year" << endl;
  }
}
