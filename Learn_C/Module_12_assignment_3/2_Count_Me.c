#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  char s[100001];
  scanf("%s", &s);

  int count = 0;
  for (int i = 0; i <= strlen(s); i++) {
    if (s[i] == 'a') {
      count += 1;
    }
    if (s[i] == 'e') {
      count += 1;
    }
    if (s[i] == 'i') {
      count += 1;
    }
    if (s[i] == 'o') {
      count += 1;
    }
    if (s[i] == 'u') {
      count += 1;
    }
  }
  int con = strlen(s) - count;
  printf("%d", con);

  return 0;
}