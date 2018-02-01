/*
Author: Anton Goretsky
Course: CSCI-133
Instructor: Professor Zamansky
Assignment: Lab1A

Prints the smallest of 2 integers.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  //Inputs
  int num1, num2;
  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;

  //Program
  if (num1 > num2) {
    cout << num2 << endl;
  }
  else {
    cout << num1 << endl;
  }
}
