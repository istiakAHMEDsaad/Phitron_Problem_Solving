#include <stdio.h>

int main() {
  int num;
  scanf("%d", &num);

  for (int i = 1; i <= num; i++) {
    if (i % 5 == 0) {
      printf("%d Yes\n", i);
    } else {
      printf("%d No\n", i);
    }
  }

  return 0;
}

/* https://judge.phitron.io/topics/cm5z7wa3u0007p301xbzdqkuk/cm832w6940057r001irt8y8ti?language=c_103 */