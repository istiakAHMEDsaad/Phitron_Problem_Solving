#include <stdio.h>
int main() {
  int i, j, num;
  printf("enter a value: ");
  scanf("%d", &num);

  for (i = 2; i <= num; i++) {  // 1 2 3 4 5
    int divisor=0;
    for (j = 1; j <= i; j++) {
      if (i % j == 0) {
        divisor++;
      }
    }

    if (divisor == 2) {
      printf("%d\n", i);
    }
  }

  return 0;
}