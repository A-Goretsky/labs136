#include <iostream>

using namespace std;

int main() {
  int lnum = 0;
  int unum = 0;
  cout << "Please enter L: ";
  cin >> lnum;
  cout << "Please enter U: ";
  cin >> unum;
  for (int i = lnum; i < unum; i++) {
    cout << i << " " << endl;
  }
}
