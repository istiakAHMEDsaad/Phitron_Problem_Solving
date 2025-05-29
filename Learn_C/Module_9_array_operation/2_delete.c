#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int idx;
  scanf("%d", &idx);

  for (int i = idx; i < n-1; i++) {
    arr[i] = arr[i + 1];
  }
  for (int i = 0; i < n-1; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}

// 5
// 1 100 2 3 4
// 1
