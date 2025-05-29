#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  int mat[n][m];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      scanf("%d", &mat[i][j]);
    }
  }

  for (int i = 0; i < m; i++) {
    printf("%d ", mat[n - 1][i]);
  }
  printf("\n");

  for (int i = 0; i < n; i++) {
    printf("%d ", mat[i][m - 1]);
  }

  return 0;
}