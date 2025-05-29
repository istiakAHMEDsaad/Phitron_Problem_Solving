#include <iostream>
using namespace std;

int main() {
  int val;
  cout << "Enter number to convert letter: ";
  cin >> val;
  if (65 <= val && val <= 122) {
    char ch = val;
    cout << "letter: " << ch << endl;
  } else {
    cout << "invalid number! (65 - 122)" << endl;
  }
  return 0;
}