#include <stdio.h>

int main() {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);

  long long sum1 = (long long)a * b;
  long long sum2 = (long long)c * d;
  long long total = sum1 - sum2;

  printf("Difference = %lld", total);

  return 0;
}