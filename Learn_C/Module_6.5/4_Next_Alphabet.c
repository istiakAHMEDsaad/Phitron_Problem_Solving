#include <stdio.h>

int main() {
  char x;
  scanf("%c", &x);
  int con_val = (int)x;
  if (con_val >= 65 && con_val <= 90) {
    con_val += 32;
  }
  if (con_val == 122) {
    con_val = 96;
  }
  printf("%c", (char)con_val + 1);

  return 0;
}