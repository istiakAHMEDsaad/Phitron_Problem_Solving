#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);

  int count = 1;
  int space = n - 1;

  for (int i = 1; i <= n; i++) {  // line
    char val;
    if (i % 2 == 0) {
      val = '-';
    } else {
      val = '#';
    }
    for (int j = 1; j <= space; j++) {  // space
      printf(" ");
    }
    for (int k = 1; k <= count; k++) {  // hash & minus
      printf("%c", val);
    }

    printf("\n");
    count += 2;
    space--;
  }

  int count2 = count - 4;
  int space2 = 1;
  for (int i = 1; i <= n - 1; i++) {  // line
    char val;
    if ((n + i) % 2 == 0) {
      val = '-';
    } else {
      val = '#';
    }
    for (int j = 1; j <= space2; j++) {  // space
      printf(" ");
    }
    for (int k = 1; k <= count2; k++) {  // hash & minus
      printf("%c", val);
    }

    printf("\n");
    count2 -= 2;
    space2++;
  }

  return 0;
}