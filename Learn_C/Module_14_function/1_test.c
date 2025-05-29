#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int sum_num(int a, int b) { return a + b; }

int main() {
  int a, b;
  printf("Enter two number: ");
  scanf("%d %d", &a, &b);
  int sum = sum_num(a, b);
  printf("%d + %d = %d", a, b, sum);

  return 0;
}