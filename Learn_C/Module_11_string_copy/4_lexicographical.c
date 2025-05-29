// apple > cat (a<c)
// apple < apply (e<y)
// abcd > ab (null < c)
// ad > abcd (d > b)

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  char a[101], b[101];
  scanf("%s %s", &a, &b);
  int i = 0;
  while (true) {
    if (a[i] == '\0' && b[i] == '\0') {
      printf("Equal\n");
      break;
    } else if (a[i] == '\0') {
      printf("'%s' is smaller than '%s'\n", a, b);
      break;
    } else if (b[i] == '\0') {
      printf("'%s' is smaller than '%s'\n", b, a);
      break;
    } else if (a[i] < b[i]) {
      printf("'%s' is smaller than '%s'\n", a, b);
      break;
    } else if (a[i] > b[i]) {
      printf("'%s' is smaller than '%s'\n", b, a);
      break;
    } else if (a[i] == b[i]) {
      i++;
    }
  }

  return 0;
}