#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int a[5] = {10, 20, 30, 40};
  *a = 100;
  *(a + 1) = 200;
  printf("Array 0th index: %p\n", &a[0]);
  for (int i = 0; i < 4; i++) {
    printf("%d ", a[i]);
  }

  return 0;
}