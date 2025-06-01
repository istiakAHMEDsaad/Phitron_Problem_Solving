#include <bits/stdc++.h>
using namespace std;

int *poin;  // <-- global pointer variable

void fun() {
  int x = 10;
  poin = &x;  // address of x stored in pointer
  cout << "outside function: " << *poin << endl;  // dereference the pointer
  return;
}

int main() {
  fun();
  cout << "main func: " << *poin << endl;
  return 0;
}