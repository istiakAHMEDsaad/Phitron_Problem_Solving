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

  int is_diagonal = true;

  if (r == c) {
    for (int i = 0; i < r; i++) {
      for (int j = 0; j < c; j++) {
        if (i == j) {  // first diagonal i & j will be same, second diagonal
                       // will be i + j == r-1
        } else {
          if (arr[i][j] != 0) {
            is_diagonal = false;
            printf("Not a primary diagonal matrix\n");
          }
        }
      }
    }
    if (is_diagonal == true) {
      printf("Primary diagonal matrix\n");
    }

  } else {
    printf("Not a primary diagonal matrix\n");
  }

  return 0;
}

// index - 1 = 2nd diagonal matrix (4*4 matrix will be 4-1=3)