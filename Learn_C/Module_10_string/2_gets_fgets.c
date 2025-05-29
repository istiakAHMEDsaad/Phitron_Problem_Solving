#include <stdio.h>
#include <string.h>

int main() {
  char s[20];
  // gets(s);
  fgets(s, 17, stdin);
  printf("%s", s);

  return 0;
}