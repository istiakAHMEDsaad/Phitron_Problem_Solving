#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int count = arr[0];
  int val = arr[0];

  for (int i = 1; i < n; i++) {  // 5 6 2 3 2, 1 2 3
    if (count > arr[i]) {
      count = arr[i];
      val = i + 1;
    }
  }
  printf("%d %d", count, val);

  return 0;
}