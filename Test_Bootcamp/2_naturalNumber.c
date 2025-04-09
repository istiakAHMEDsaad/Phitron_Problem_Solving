#include <stdio.h>
int main() {
  int n, val;
  printf("enter num: ");
  scanf("%d", &n);
  val = (n * (n + 1) / 2);
  printf("sum: %d", val);
  return 0;
}

/* #include <stdio.h>
int main() {
  int i, n, sum = 0;
  printf("Enter number -> ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    sum += i;
  }
  printf("sum: %d", sum);
  return 0;
} */