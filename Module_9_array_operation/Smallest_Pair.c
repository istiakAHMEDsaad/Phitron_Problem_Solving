#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int t;
  scanf("%d", &n);
  while (t--) {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
      scanf("%d", &arr[i]);
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
      for (int j = j + 1; j < n; j++) {
        sum = arr[i] + arr[j] + i - j;
      }
    }
  }

  return 0;
}

// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I