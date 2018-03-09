#include "funcs.hpp"

#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::endl;

int main() {
  cout << "~~~~ isDivisibleBy Testing ~~~~" << endl;
  cout << isDivisibleBy(2, 0) << endl;
  cout << isDivisibleBy(2, 2) << endl;
  cout << isDivisibleBy(4, 1) << endl;
  cout << isDivisibleBy(6, 3) << endl;
  cout << isDivisibleBy(6, 4) << endl;
  cout << "\n";

  cout << "~~~~ isPrime Testing ~~~~" << endl;
  cout << isPrime(-1) << endl;
  cout << isPrime(2) << endl;
  cout << isPrime(0) << endl;
  cout << isPrime(4) << endl;
  cout << isPrime(38083) << endl;
  cout << "\n";

  cout << "~~~~ nextPrime Testing ~~~~" << endl;
  cout << nextPrime(-5) << endl;
  cout << nextPrime(2) << endl;
  cout << nextPrime(3) << endl;
  cout << "\n";

  cout << "~~~~ countPrimes Testing ~~~~" << endl;
  cout << countPrimes(0, 10) << endl;
  cout << countPrimes(10, 100) << endl;
  cout << "\n";

  cout << "~~~~ isTwinPrime Testing ~~~~" << endl;
  cout << isTwinPrime(1) << endl;
  cout << isTwinPrime(2) << endl;
  cout << isTwinPrime(3) << endl;
  cout << isTwinPrime(17) << endl;
  cout << isTwinPrime(19) << endl;
  cout << "\n";

  cout << "~~~~ nextTwinPrime Testing ~~~~" << endl;
  cout << nextTwinPrime(18) << endl;
  cout << nextTwinPrime(-10) << endl;
  cout << nextTwinPrime(31) << endl;
  cout << "\n";

  cout << "~~~~ largestTwinPrime Testing ~~~~" << endl;
  cout << largestTwinPrime(0, 100) << endl;
  cout << largestTwinPrime(-10, -5) << endl;
  cout << largestTwinPrime(60, 10) << endl;
  cout << largestTwinPrime(100, 1000) << endl;
  cout << "\n";
}
