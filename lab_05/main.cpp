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
  
  cout << "\n";

  cout << "~~~~ isTwinPrime Testing ~~~~" << endl;
  cout << "\n";

  cout << "~~~~ nextTwinPrime Testing ~~~~" << endl;
  cout << "\n";

  cout << "~~~~ largestTwinPrime Testing ~~~~" << endl;
  cout << "\n";
}
