#include <stdio.h>
int main() {
  int n;
  scanf("%d", &n);
  if (n < 0) {
    return 0;
  }
  if (n % 3 == 0) {
    printf("YES");
  } else {
    printf("NO");
  }
  return 0;
}