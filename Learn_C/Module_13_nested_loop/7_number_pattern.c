#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  int space = n - 1;
  int val = 1;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= space; j++) {
      printf(" ");
    }
    for (int k = 1; k <= val; k++) {
      printf("%d ", k);
    }
    printf("\n");
    space--;
    val++;
  }

  return 0;
}