#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void odd_even() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int count_ev = 0;
  int count_od = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      count_ev++;
    }
    if (arr[i] % 2 != 0) {
      count_od++;
    }
  }

  printf("%d %d", count_ev, count_od);
}

int main() {
  odd_even();

  return 0;
}