#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  for (int i = 1; i <= x; i++) {
    int a, b;
    scanf("%d %d", &a, &b);

    // a=4, b=9
    if (a > b) {
      int temp = a;
      a = b;
      b = temp;
    }

    int start = a + 1;
    int end = b - 1;
    int sum = 0;

    for (int j = start; j <= end; j++) {
      if (j % 2 != 0) {
        sum += j;
      }
    }

    printf("%d\n", sum);
  }

  return 0;
}