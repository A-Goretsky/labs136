/*
Author: Anton Goretsky
Course: CSCI-133
Instructor: Professor Zamansky
Assignment: Lab2D

Prints out Fibonacci numbers 0 to 59.
The negatives appear because of limited overflow of the int type.
Two's compliment dictates the left most bit determines sign,
1 = negative, 0 = positive. Overlow cuts off left bits at 0's and 1's.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  int fib[60];
  fib[0] = 0;
  fib[1] = 1;
  cout << fib[0] << '\n' << fib[1] << '\n';
  for (int i = 2; i < 60; i++) {
    fib[i] = fib[i-1] + fib[i-2];
    cout << fib[i] << endl;
  }
}
