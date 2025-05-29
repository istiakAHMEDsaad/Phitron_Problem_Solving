#include <stdio.h>

int main() {
  int x, count = 0;
  scanf("%d", &x);
  for (int i = 1; i <= x; i++) {
    if (x % i == 0) {
      printf("%d\n", i);
    }
  }

  return 0;
}