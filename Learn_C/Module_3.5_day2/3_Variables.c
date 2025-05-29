#include <stdio.h>
int main() {
  int a;
  long long b;
  float c;
  char d;

  scanf("%d %lld %f %c", &a, &b, &c, &d);
  printf("%d\n%lld\n%.2f\n%c", a, b, c, d);
  return 0;
}

/* https://judge.phitron.io/topics/cm5z7wa3u0007p301xbzdqkuk/cm8328tot004nr001spsd8yba?language=c_103 */