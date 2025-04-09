#include <stdio.h>
int main() {
  int i, n;
  printf("Enter how many even number you want to show? -> ");
  scanf("%d", &n);
  for (i = 2; i <= n; i++) {
    if (i % 2 == 0) {
      printf("%d\n", i);
    }
  }
  return 0;
}

/* #include <stdio.h>
int main() {
  int i;
  for (i = 2; i < 100; i += 2) {
    printf("%d\n", i);
  }
  return 0;
} */