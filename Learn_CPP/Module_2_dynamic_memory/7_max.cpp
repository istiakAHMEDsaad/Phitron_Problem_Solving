#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int mAx = INT_MIN;
  for (int i = 0; i < n; i++) {
    // if (arr[i] > mAx) {
    //   mAx = arr[i];
    // }
    mAx = max(arr[i], mAx);
  }
  cout << mAx << endl;
  return 0;
}