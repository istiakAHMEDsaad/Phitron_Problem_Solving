#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);
  int count = n;
  for (int i = 1; i <= n; i++) {
    for (int j = count; j >= i; j--) {
      printf("*");
    }
    printf("\n");
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
//     for (int j = n; j >= i; j--) {
//       printf("*");
//     }
//     printf("\n");
//   }

//   return 0;
// }