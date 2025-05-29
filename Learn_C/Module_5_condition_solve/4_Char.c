#include <stdio.h>

int main() {
  char x;
  scanf("%c", &x);
  
  if (x >= 'a' && x <= 'z') {
    printf("%c", x - 32);
  } else if (x >= 'A' && x <= 'Z') {
    printf("%c", x + 32);
  }

  return 0;
}

/* #include <stdio.h>

int main() {
  char x;
  scanf("%c", &x);
  int con_val = (int)x;
  if (con_val >= 97 && con_val <= 122) {
    printf("%c", (char)con_val - 32);
  } else if (con_val >= 65 && con_val <= 90) {
    printf("%c", (char)con_val + 32);
  }

  return 0;
} */