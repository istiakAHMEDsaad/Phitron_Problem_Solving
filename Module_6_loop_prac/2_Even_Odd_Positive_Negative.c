#include <stdio.h>

int main() {
  int n, x;
  int ev = 0, odd = 0, pos = 0, neg = 0;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%d", &x);
    if (x % 2 == 0) {
      ev += 1;
    }
    if (x % 2 != 0) {
      odd += 1;
    }
    if (x > 0) {
      pos += 1;
    }
    if (x < 0) {
      neg += 1;
    }
  }

  printf("Even: %d\n", ev);
  printf("Odd: %d\n", odd);
  printf("Positive: %d\n", pos);
  printf("Negative: %d\n", neg);

  return 0;
}