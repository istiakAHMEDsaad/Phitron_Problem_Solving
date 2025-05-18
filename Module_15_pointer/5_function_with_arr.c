#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void func(int arr[], int n) {
  for (int i = 0; i < n; i++) {
    printf("%d", arr[i]);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  func(arr, n);
  return 0;
}