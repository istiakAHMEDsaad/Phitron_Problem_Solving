#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int add(int a, int b) {
  int sum = a + b;
  return sum;
}

int sub(int a, int b) {
  int sum = a - b;
  return sum;
}

int main() {
  int a, b;
  printf("Enter two value: ");
  scanf("%d %d", &a, &b);
  int add_fun = add(a, b);
  int sub_fun = sub(a, b);

  printf("Addition: %d\nSubstraction: %d", add_fun, sub_fun);

  return 0;
}