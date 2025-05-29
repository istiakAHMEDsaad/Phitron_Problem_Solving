#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void fun(int* x) {
  *x = 20;
  printf("function location: %d\n", x);
}

int main() {
  int x = 10;
  fun(&x);
  printf("main function location: %d\n", x);

  return 0;
}