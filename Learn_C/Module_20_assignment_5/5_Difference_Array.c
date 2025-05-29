#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
  int t;
  scanf("%d", &t);

  for (int i = 1; i <= t; i++) {
    int n;
    scanf("%d", &n);

    int a[1001];
    int b[1001];
    int c[1001];

    for (int i = 0; i < n; i++) {
      scanf("%d", &a[i]);
      b[i] = a[i];
    }

    for (int i = 0; i < n ; i++) {
      for (int j = i + 1; j < n; j++) {
        if (b[i] > b[j]) {
          int temp = b[i];
          b[i] = b[j];
          b[j] = temp;
        }
      }
    }

    for (int i = 0; i < n; i++) {
      c[i] = a[i] - b[i];
      printf("%d ", abs(c[i]));
    }
    printf("\n");
  }

  return 0;
}