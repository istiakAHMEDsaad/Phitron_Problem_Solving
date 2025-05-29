#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void func(char s[]) {
  int len = strlen(s);
  printf("%s %d", s, len);
}

int main() {
  char s[10];
  scanf("%s", &s);
  func(s);
  
  return 0;
}