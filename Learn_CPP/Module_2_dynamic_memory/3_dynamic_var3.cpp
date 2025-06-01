#include <bits/stdc++.h>
using namespace std;

int *p;

void fun() {
  int *a = new int;  // allocate heap memory address to the 'a' pointer
  *a = 10;           // deference the value to 10
  p = a;             // store a address to the p pointer
  cout << "outside function: " << *p << endl;
}

int main() {
  fun();
  cout << "main function: " << *p << endl;
  return 0;
}