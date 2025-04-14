#include <stdio.h>

int main() {
  int x;
  //EOF -> end of file
  while (scanf("%d", &x)) { //while (scanf("%d", &x) != EOF)  for(; scanf("%d", &x); )
    if (x == 1999) {
      printf("Correct\n");
      break;
    } else if (x != 1999) {
      printf("Wrong\n");
    }
  }

  return 0;
}