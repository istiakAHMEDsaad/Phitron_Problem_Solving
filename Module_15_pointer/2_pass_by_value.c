#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void fun(int x) {
  x = 20;
  printf("function location: %p\n", x);
}

int main() {
  int x = 10;
  printf("main function location: %p\n", x);
  fun(x);

  return 0;
}