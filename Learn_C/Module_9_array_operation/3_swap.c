#include <stdio.h>

int main() {
  int a = 10;
  int b = 20;
  printf("Before swap: %d %d\n", a, b);
  int temp = a;
  a=b;
  b=temp;
  printf("After swap: %d %d", a, b);
  
  return 0;
}