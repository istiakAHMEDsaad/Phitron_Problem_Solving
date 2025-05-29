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

  if (c == 1) {
    printf("Coulmn matrix\n");
  } else {
    printf("Not a coulmn matrix\n");
  }

  return 0;
}