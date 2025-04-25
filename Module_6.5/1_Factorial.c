#include <stdio.h>

int main() {
  int t;
  scanf("%d", &t);
  for (int i = 1; i <= t; i++) {
    int n;
    scanf("%d", &n);
    long long count = 1;
    for (int j = 1; j <= n; j++) {
      count *= j;
    }
    printf("%lld\n", (long long)count);
  }

  return 0;
}