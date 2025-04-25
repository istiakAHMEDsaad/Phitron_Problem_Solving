#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if (n >= 1 && n <= 10) {
    for (int i = 1; i <= n; i++) {
      int cha = 64+i; //64+1 64+2 64+3
      for (int j = 1; j <= i; j++) {
        printf("%c ", (char)cha);
      }
      printf("\n");
    }
  }

  return 0;
}