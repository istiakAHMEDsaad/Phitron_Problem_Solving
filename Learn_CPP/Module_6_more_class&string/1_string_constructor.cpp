#include <bits/stdc++.h>
using namespace std;

int main() {
  // method 1
  string s = "Normal";
  cout << "Normal string: " << s << endl;

  // method 2
  string p("Call text");
  cout << "Constructor: " << p << endl;

  // method 3
  string q("value and integer", 5);
  cout << "Constructor: " << q << endl;

  // method 4
  string x = "stupid zorina";
  string y(x, 3);
  cout << "leftover: " << y << endl;

  // method 5
  string print_ass(5, '*');
  cout << print_ass << endl;

  return 0;
}