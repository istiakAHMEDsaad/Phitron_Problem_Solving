#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  int space = n - 1;

  for (int i = 1; i <= n; i++) {  // line
    for (int j = 1; j <= space; j++) {
      printf(" ");
    }
    for (int k = i; k >= 1; k--) {
      printf("%d", k);
    }
    printf("\n");
    space--;
  }

  return 0;
}