#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cout << "How many loop would you like to run? ->";
  cin >> n;
  int a[n];
  cout << "Enter number: ";
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  reverse(a, a + n);  // last index: arry + array size
  cout << "Reversed number: ";
  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }

  string nam;
  cout << "\nEnter a string: ";
  cin >> nam;
  reverse(nam.begin(), nam.end());
  cout << "Your enterd string as reversed: " << nam << endl;
  return 0;
}