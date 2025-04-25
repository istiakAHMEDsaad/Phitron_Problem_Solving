#include <stdio.h>
#include <string.h>

int main() {
  char s[1000001];
  scanf("%s", &s);
  int len = strlen(s);
  int sum = 0;
  for (int i = 0; i < len; i++) {
    sum += s[i] - 48;
  }
  printf("%d", sum);

  return 0;
}
// sum += s[i] - '0';