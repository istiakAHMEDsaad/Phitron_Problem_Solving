#include <stdio.h>

int main() {
  short a, b;
  scanf("%hi %hi", &a, &b);

  if (a >= b) {
    printf("Yes\n");
  } else {
    printf("No");
  }
  return 0;
}