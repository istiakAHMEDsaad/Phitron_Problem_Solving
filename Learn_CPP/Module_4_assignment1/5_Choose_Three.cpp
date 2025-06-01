#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {
    int n, s;
    cin >> n >> s;

    int arr[n];
    int count = 0;

    for (int j = 0; j < n; j++) {
      cin >> arr[j];
    }

    for (int k = 0; k < n - 2; k++) {
      for (int l = k + 1; l < n - 1; l++) {
        for (int m = l + 1; m < n; m++) {
          int sum = arr[k] + arr[l] + arr[m];
          if (sum == s) {
            count = 1;
            break;
          }
        }
      }
    }

    if (count == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
  return 0;
}
