#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  int before[n];
  for (int i = 0; i < n; i++) {
    before[i] = arr[i];
  }

  int i = 0;
  int j = n - 1;
  while (i < j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }

  int after[n];
  for (int i = 0; i < n; i++) {
    after[i] = arr[i];
  }

  int b_count = 1;
  int a_count = 1;
  for (int i = 0; i < n; i++) {
    if (before[i] == after[i]) {
      b_count++;
    }
    if (before[i] != after[i]) {
      a_count;
    }
  }
  if (b_count == a_count) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }

  return 0;
}