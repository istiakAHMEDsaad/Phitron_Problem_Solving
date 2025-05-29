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

  if (r == c) {
    printf("Squar matrix\n");
  } else {
    printf("Not a squar matrix\n");
  }

  return 0;
}