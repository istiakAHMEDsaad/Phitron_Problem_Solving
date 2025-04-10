#include <stdio.h>
int main() {
  long long n;
  scanf("%lld", &n);
  long long l = n - 1000;

  if (n > 1000) {
    printf("I will buy Punjabi\n");
    if (l >= 500) {
      printf("I will buy new shoes\n");
      printf("Alisa will buy new shoes\n");
    }
  } else {
    printf("Bad luck!");
  }

  return 0;
}