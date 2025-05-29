#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int count_before_one(int arr_size) {
  int arr[arr_size];
  for (int i = 0; i < arr_size; i++) {
    scanf("%d", &arr[i]);
  }
  for (int j = 0; j < arr_size; j++) {
    if (arr[j] == 1) {
      return j;
    }
  }
  return arr_size;
}

int main() {
  int n;
  scanf("%d", &n);
  int count = count_before_one(n);
  printf("%d", count);

  return 0;
}