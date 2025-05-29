#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n, star = 1;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= star; j++) {
      printf("*");
    }
    printf("\n");
    star++;
  }

  return 0;
}

// #include <stdbool.h>
// #include <stdio.h>
// #include <string.h>

// int main() {
//   int n;
//   scanf("%d", &n);
//   for (int i = 1; i <= n; i++) {
//     for (int j = 1; j <= i; j++) {
//       printf("*");
//     }
//     printf("\n");
//   }

//   return 0;
// }