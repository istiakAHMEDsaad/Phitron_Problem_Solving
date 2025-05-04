#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    int m1, m2, d;
    scanf("%d %d %d", &m1, &m2, &d);

    int far = m1 + m2;
    int x = m1 * d;
    int y = x / far;
    int red_day = d - y;
    printf("%d\n", red_day);
  }

  return 0;
}