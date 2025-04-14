#include <stdio.h>

int main() {
  int x;
  while (scanf("%d", &x)) { //EOF -> end of file
    if (x == 1999) {
      printf("Correct\n");
      break;
    } else if (x != 1999) {
      printf("Wrong\n");
    }
  }

  return 0;
}