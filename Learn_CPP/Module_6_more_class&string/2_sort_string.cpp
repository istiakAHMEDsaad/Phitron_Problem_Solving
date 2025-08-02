#include <bits/stdc++.h>
using namespace std;

int main() {
  string nam;
  cout << "Enter anything for sorted string: ";
  // cin >> nam;
  getline(cin,nam);
  sort(nam.begin(), nam.end());
  cout << "Your sorted string: " << nam << endl;

  return 0;
}