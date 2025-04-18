#include <stdio.h>

int main() {
  int n;
  int add = 0;
  int sub = 0;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    int x;
    scanf("%d", &x);
    if (x >= 0) {
      add += x;
    }
    if (x < 0) {
      sub += x;
    }
  }
  printf("%d %d", add, sub);

  return 0;
}