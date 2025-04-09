#include <stdio.h>
int main() {
  int i, num, divisor = 0;
  printf("check prime or not -> ");
  scanf("%d", &num);
  for (i = 1; i <= num; i++) {
    if (num % i == 0) {
    //   printf("%d\n", i);
      divisor++;
    }
  }

  if (divisor == 2) {
    printf("'%d' prime number", num);
  } else {
    printf("'%d' not a prime number", num);
  }
  return 0;
}