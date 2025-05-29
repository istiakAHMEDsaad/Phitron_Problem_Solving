#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void print_arr(int arr[], int n, int i) {
  printf("%d", i);
  print_arr();
}

int main() {
  int n;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  print_arr(arr, n, 0);
  return 0;
}