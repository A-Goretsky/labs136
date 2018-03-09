#include "funcs.hpp"

#include <iostream>
#include <string>
#include <fstream>
#include <math.h>

using std::cout;
using std::endl;

//check if n is 0 or negative;
bool isDivisibleBy(int n, int d) {
  if (d == 0) {
    return false;
  }
  return (n % d == 0);
}

bool isPrime(int n) {
  if (n <= 1) {
    return false;
  }
  for (int i = 2; i <= (int) sqrt(n); i++) {
    if (isDivisibleBy(n, i)) {
      return false;
    }
  }
  return true;
}

int nextPrime(int n) {
  for (n += 1; !isPrime(n); n++) {
    ;
  }
  return n;
}

//check if a and b are reversed in value
int countPrimes(int a, int b) {
  int temp = 0;
  if (b < a) {
    cout << "a is greater than b in input!! Calculating in reverse..." << endl;
    temp = a;
    a = b;
    b = temp;
  }
  int ctr = 0;
  for (int i = a; i <= b; i++) {
    if (isPrime(i)) {
      ctr++;
    }
  }
  return ctr;
}

bool isTwinPrime(int n) {
  if (isPrime(n)) {
    return (isPrime(n-2) || isPrime(n+2));
  }
  return false;
}

int nextTwinPrime(int n) {
  for (n += 1; !isTwinPrime(n); n++) {
    ;
  }
  return n;
}

//check if a and b are reversed in value
int largestTwinPrime(int a, int b) {
  int temp = 0;
  if (b < a) {
    cout << "a is greater than b in input!! Calculating in reverse..." << endl;
    temp = a;
    a = b;
    b = temp;
  }
  int res = -1;
  for (int i = a; i <= b; i++) {
    if (isTwinPrime(i)) {
      res = i;
    }
  }
  return res;
}
