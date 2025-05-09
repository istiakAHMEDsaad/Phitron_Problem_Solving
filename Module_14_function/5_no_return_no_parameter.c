#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void print_fun() {
  int a, b;
  printf("Enter two value: ");
  scanf("%d %d", &a, &b);
  int sum = a + b;
  printf("Addition: %d", sum);
}

int main() {
  print_fun();

  return 0;
}