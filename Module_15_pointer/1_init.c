#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int x = 10;
  printf("x value = %d\n", x);
  printf("x value address = %d\n", &x);

  int* ptr;
  ptr = &x;
  printf("pointer = %p\n", ptr);
  printf("pointer address = %p\n", &ptr);
  
  return 0;
}