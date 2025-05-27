#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void third_func() { printf("Third function\n"); }

void second_func() {
  printf("Second function\n");
  third_func();
}

void first_fun() {
  printf("First function\n");
  second_func();
}

int main() {
  printf("Main Function\n");
  first_fun();

  return 0;
}