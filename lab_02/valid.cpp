/*
Author: Anton Goretsky
Course: CSCI-133
Instructor: Professor Zamansky
Assignment: Lab2A

Asks for user integer input, will ask repeatedly until #
between 0 and 100 exclusive is inputted. Returns square.
*/

#include <iostream>
#include <string>
#include <limits>

using namespace std;

int main() {
  int num = 0;

  while (true) {
    cout << "Please enter an integer: ";
    if (!(cin >> num) || cin.peek() != '\n' || (num < 1 || num > 99)) {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      std::cout << "Try again.\n";
    }
    else {
      break;
    }
  }
  cout << "\nThe square of " << num << " is: " << num * num << endl;

}
