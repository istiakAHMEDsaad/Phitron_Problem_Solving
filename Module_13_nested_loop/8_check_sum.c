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
  scanf("%d", &val);
  int flag = false;

  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] == val) {
        flag = true;
        printf("YES\n");
      }
    }
  }
  if (flag == false) {
    printf("NO\n");
  }

  return 0;
}

// 4
// 5 3 2 6
// 9