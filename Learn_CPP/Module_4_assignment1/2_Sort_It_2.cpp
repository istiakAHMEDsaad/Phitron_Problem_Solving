#include <bits/stdc++.h>
using namespace std;

int* sort_it(int size) {
  int* arr = new int[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  sort(arr, arr + size, greater<int>());
  return arr;
}

int main() {
  int n;
  cin >> n;
  int* fun = sort_it(n);
  for (int i = 0; i < n; i++) {
    cout << fun[i] << " ";
  }

  return 0;
}