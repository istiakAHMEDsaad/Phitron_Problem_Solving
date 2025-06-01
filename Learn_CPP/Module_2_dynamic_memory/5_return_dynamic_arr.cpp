#include <bits/stdc++.h>
using namespace std;

int* func() {
  int *a = new int[5];
  for (int i = 0; i < 5; i++) {
    cin >> a[i];
  }
  return a;
}

int main() {
  int* x = func();
  for (int i = 0; i < 5; i++) {
    cout << x[i];
  }
  return 0;
}