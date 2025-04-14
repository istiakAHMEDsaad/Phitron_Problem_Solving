#include <stdio.h>

int main() {
  int x, y;
  scanf("%d %d", &x, &y);

  int add = x + y;
  long long mul = (long long)x * y;
  int sub = x - y;

  printf("%d + %d = %d\n", x, y, add);
  printf("%d * %d = %lld\n", x, y, mul);
  printf("%d - %d = %d", x, y, sub);

  return 0;
}