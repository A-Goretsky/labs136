/*
Author: Anton Goretsky
Course: CSCI-133
Instructor: Professor Zamansky
Assignment: Lab1B

Prints the smallest of 3 integers.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  //Inputs
  int num1, num2, num3;
  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;
  cout << "Enter the third number: ";
  cin >> num3;

  //Program
  int ans = num1;
  if (num2 < ans) {
    ans = num2;
  }
  if (num3 < ans) {
    ans = num3;
  }
  cout << ans << endl;
}
