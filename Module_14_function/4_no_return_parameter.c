#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void print_sum(int a, int b) {
  int sum = a + b;
  printf("Addition: %d", sum);
}

int main() {
  int a, b;
  printf("Enter two value: ");
  scanf("%d %d", &a, &b);
  print_sum(a, b);

  return 0;
}