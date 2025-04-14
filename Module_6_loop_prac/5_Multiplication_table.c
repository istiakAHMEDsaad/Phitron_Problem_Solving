#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  for (int i = 1; i <= 12; i++) {
    int sum = x * i;
    printf("%d * %d = %d\n", x, i, sum);
  }

  return 0;
}