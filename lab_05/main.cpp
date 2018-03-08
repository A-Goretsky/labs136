#include "funcs.hpp"

#include <iostream>
#include <string>
#include <fstream>

using std::cout;
using std::endl;

int main() {
  cout << isPrime(-1) << endl;
  cout << "~~~~~~~~~~~" << endl;
  cout << isPrime(2) << endl;
  cout << "~~~~~~~~~~~" << endl;
  cout << isPrime(0) << endl;
  cout << "~~~~~~~~~~~" << endl;
  cout << isPrime(4) << endl;
  cout << "~~~~~~~~~~~" << endl;
  cout << isPrime(38083) << endl;
  cout << "~~~~~~~~~~~" << endl;
  cout << nextPrime(-5) << endl;
  cout << "~~~~~~~~~~~" << endl;
  cout << nextPrime(2) << endl;
  cout << "~~~~~~~~~~~" << endl;
  cout << nextPrime(3) << endl;
}
