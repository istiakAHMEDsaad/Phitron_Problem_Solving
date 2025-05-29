#include <stdio.h>
#include <string.h>

int main() {
  char s[101];
  scanf("%s", &s);

  int siz = strlen(s);
  printf("%d", siz);

  return 0;
}