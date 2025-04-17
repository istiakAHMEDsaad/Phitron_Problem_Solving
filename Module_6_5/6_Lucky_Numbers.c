#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  int first = n / 10;
  int second = n % 10;

  if ((second != 0 && first % second == 0) ||
      (first != 0 && second % first == 0)) {
    printf("YES\n");
  } else {
    printf("NO");
  }

  return 0;
}
