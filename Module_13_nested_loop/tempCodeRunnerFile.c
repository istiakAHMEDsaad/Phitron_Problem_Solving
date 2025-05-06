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
  int val;
  int first_val = arr[0];
  scanf("%d", &val);
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == val) {
        printf("YES\n");
      } else {
        printf("NO\n");
      }
    }
  }

  return 0;
}