#include <stdio.h>

int main() {
  int x;
  scanf("%d", &x);
  int a[x];
  for (int i = 0; i < x; i++) {
    scanf("%d", &a[i]);
  }

  int y;
  scanf("%d", &y);
  int b[y];
  for (int i = 0; i < y; i++) {
    scanf("%d", &b[i]);
  }

  int z[x + y];

  for (int i = 0; i < x; i++) { //copying first array
    z[i] = a[i];
  }

  for (int i = 0; i < y; i++) { //copying second array
    z[i + x] = b[i];
  }

  for (int i = 0; i < x + y; i++) { //printing after copy
    printf("%d ", z[i]);
  }

  return 0;
}

/* 
5
10 20 30 40 50
2
60 70
*/