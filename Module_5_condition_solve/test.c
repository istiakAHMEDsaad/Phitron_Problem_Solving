#include <stdio.h>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  if ((a / b % 2 == 0) || (b / a % 2 == 0)) {
    printf("Multiples");
  } else {
    printf("No Multiples");
  }

  return 0;
}

/* float sum = (float) a/b;
  printf("%.2f", sum); */