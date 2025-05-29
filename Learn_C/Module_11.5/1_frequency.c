#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int freq[6] = {0};
  for (int i = 0; i < n; i++) {
    int val = arr[i];
    freq[val]++;
  }

  for (int i = 0; i < 6; i++) {
    printf("%d -> %d\n", i, freq[i]);
  }

  return 0;
}
