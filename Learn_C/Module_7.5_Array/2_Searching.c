#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int x, val = 0;
  scanf("%d", &x);
  for (int i = 0; i < n; i++) {
    if (arr[i] == x) {
      printf("%d", i);
      val = 1;
      break;
    }
  }
  if (val != 1) {
    printf("-1");
  }

  return 0;
}
