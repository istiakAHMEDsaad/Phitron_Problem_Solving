#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 1; i <= n; i++) {
    scanf("%d", &arr[i]);
    if (arr[i] > 0) {
      arr[i] = 1;
    } else if (arr[i] < 0) {
      arr[i] = 2;
    } else {
      arr[i] = 0;
    }
    printf("%d ", arr[i]);
  }

  return 0;
}