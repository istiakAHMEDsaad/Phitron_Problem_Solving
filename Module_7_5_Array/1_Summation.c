#include <stdio.h>

int main() {
  long long int x;
  scanf("%lld", &x);
  long long int arr[x];
  long long int sum = 0;
  for (int i = 1; i <= x; i++) {
    scanf("%lld", &arr[i]);
    sum += arr[i];
  }
  if (sum <= 0) {
    printf("%lld", sum * -1);
  } else {
    printf("%lld", sum);
  }

  return 0;
}