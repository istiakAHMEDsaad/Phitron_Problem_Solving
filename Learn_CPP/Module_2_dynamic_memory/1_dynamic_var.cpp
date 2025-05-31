#include <bits/stdc++.h>
using namespace std;
int main() {
  int x = 10;
  int *poin = new int; // <-- store heap memor address to the poin variable
  *poin = 20; // <-- dereference the pointer to the value
  cout << *poin << endl; // <-- accessing the pointer addresss and the address contain the value
  return 0;
}