#include <stdio.h>
#include <string.h>

int main() {
  char a[101], b[101];
  scanf("%s %s", &a, &b);

  strcpy(a, b);  // copy b and put on a

  printf("%s %s", a, b);

  return 0;
}