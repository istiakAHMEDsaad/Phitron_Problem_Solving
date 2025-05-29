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

  int jadu = 1;

  if (n != m) {
    printf("NO\n");
    return 0;
  } else {
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (i == j || i + j == n - 1) {
          if (mat[i][j] != 1) {
            jadu = 0;
            break;
          }
        } else {
          if (mat[i][j] != 0) {
            jadu = 0;
            break;
          }
        }
      }

      if (jadu == 0) {
        break;
      }
    }
  }

  if (jadu == 1) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}