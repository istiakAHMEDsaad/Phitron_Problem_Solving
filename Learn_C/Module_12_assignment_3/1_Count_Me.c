#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int a = 0;
  int b = 0;
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0 && arr[i] % 3 == 0) {
      if (arr[i] % 2 == 0) {
        a += 1;
      }
    } else if (arr[i] % 2 == 0) {
      a += 1;
    } else if (arr[i] % 3 == 0) {
      b += 1;
    }
  }
  printf("%d %d", a, b);

  return 0;
}