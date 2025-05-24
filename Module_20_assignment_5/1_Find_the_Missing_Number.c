#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    long long m;
    int a, b, c;
    scanf("%lld %d %d %d", &m, &a, &b, &c);

    int sum = a * b * c;
    long long val = m / sum;

    if (sum == 0) {
      if (m == 0) {
        printf("0\n");
      } else {
        printf("-1\n");
      }
    } else if (m % sum != 0) {
      printf("-1\n");
    } else {
      printf("%lld\n", val);
    }
  }

  return 0;
}