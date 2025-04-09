#include <stdio.h>
int main() {
  int a, b;
  scanf("%d %d", &a, &b);

  if ((b/a) % 2 == 0) {
    printf("Yes");
  } else {
    printf("No");
  }

  return 0;
}

/* https://judge.phitron.io/topics/cm5z7wa3u0007p301xbzdqkuk/cm82x5rnr003er00114f9qwvx?language=c_103 */