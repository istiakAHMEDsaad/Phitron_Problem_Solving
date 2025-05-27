#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void rev_fun(int i) {
  if (i == 0) {
    return;
  }
  printf("%d\n", i);
  rev_fun(i-1);
}

int main() {
  int i = 5;
  rev_fun(i);

  return 0;
}