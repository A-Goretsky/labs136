/*
Author: Anton Goretsky
Course: CSCI-133
Instructor: Professor Zamansky
Assignment: Lab2B

Asks for lower and upper limit integers, prints all integers
between limits exclusive of upper limit.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  int lnum = 0;
  int unum = 0;

  while (true) {
    cout << "Please enter a lower limit: ";
    if (!(cin >> lnum) || cin.peek() != '\n') {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      std::cout << "Try again.\n";
    }
    else {
      break;
    }
  }

  while (true) {
    cout << "Please enter an upper limit: ";
    if (!(cin >> unum) || cin.peek() != '\n' || (unum < lnum)) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      std::cout << "Try again.\n";
    }
    else {
      break;
    }
  }

  for (int i = lnum; i < unum; i++) {
    cout << i << " ";
  }
  cout << endl;
}
