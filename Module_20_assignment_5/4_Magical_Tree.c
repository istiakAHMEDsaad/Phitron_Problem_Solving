#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);

  int line = 5 + n;
  int star = 1;
  int space = line - 1;

  for (int i = 1; i <= line; i++) {
    for (int j = 1; j <= space; j++) {
      printf(" ");
    }
    for (int k = 1; k <= star; k++) {
      printf("*");
    }
    printf("\n");
    space--;
    star += 2;
  }

  return 0;
}