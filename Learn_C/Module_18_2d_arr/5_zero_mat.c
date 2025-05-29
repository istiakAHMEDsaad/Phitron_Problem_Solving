#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int r, c;
  scanf("%d %d", &r, &c);
  int arr[r][c];

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  int total_val = r * c;
  int zero = 0;

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (arr[i][j] == 0) {
        zero++;
      }
    }
  }

  if (total_val == zero) {
    printf("Zero matrix\n");
  } else {
    printf("Not a zero matrix\n");
  }

  return 0;
}