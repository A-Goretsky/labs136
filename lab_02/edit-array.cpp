#include <iostream>
#include <string>

using namespace std;

int main() {

  int ind = 0;
  int val = 0;
  int annoy_connor[10];
  for (int i = 0; i < 10; i++) {
    annoy_connor[i] = 1;
  }

  while (true) {
    for (int i = 0; i < 10; i++) {
      cout << annoy_connor[i] << " ";
    }
    cout << "\n\n";
    cout << "Input index: ";
    if (!(cin >> ind) || cin.peek() != '\n') {
      cin.clear();
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
      std::cout << "Try again.\n";
    }
    else if (ind < 0 || ind >= 10) {
      cout << "Index out of range. Exit.\n";
      break;
    }
    else {
      while (true) {
        cout << "Input value: ";
        if (!(cin >> val) || cin.peek() != '\n') {
          cin.clear();
          cin.ignore(numeric_limits<streamsize>::max(), '\n');
          std::cout << "Try again.\n";
        }
        else {
          annoy_connor[ind] = val;
          cout << "\n";
          break;
        }
      }
    }
  }
}
