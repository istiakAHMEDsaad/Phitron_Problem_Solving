#include <stdio.h>
#include<limits.h>

int main() {
  int n, x;
  int val = INT_MIN;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    scanf("%d", &x);
    if (x > val) {
      val = x;
    }
  }
  printf("%d", val);

  return 0;
}