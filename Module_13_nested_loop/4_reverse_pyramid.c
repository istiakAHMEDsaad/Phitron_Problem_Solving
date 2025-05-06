#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  int count = 1;
  int space = n - 1;

  for (int i = 1; i <= n; i++) {        // line
    for (int k = 1; k <= space; k++) {  // space
      printf(" ");
    }

    for (int j = 1; j <= count; j++) {  // star
      printf("*");
    }
    printf("\n");
    count ++;
    space--;
  }

  return 0;
}
