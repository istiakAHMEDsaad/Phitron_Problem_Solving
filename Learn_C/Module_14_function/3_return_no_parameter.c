#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int sum() {
  int a, b;
  printf("Enter two value: ");
  scanf("%d %d", &a, &b);
  int sum = a + b;
  return sum;
}

int main() {
  int sum_fun = sum();
  printf("Addition: %d", sum_fun);

  return 0;
}