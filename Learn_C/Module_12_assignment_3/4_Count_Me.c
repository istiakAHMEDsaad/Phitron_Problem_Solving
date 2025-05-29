#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n;
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    char s[10001];
    int cap = 0, sml = 0, dig = 0;
    scanf("%s", &s);

    for (int i = 0; i <= strlen(s); i++) {
      if (s[i] >= 'a' && s[i] <= 'z') {
        sml += 1;
      }
      if (s[i] >= 'A' && s[i] <= 'Z') {
        cap += 1;
      }
      if (s[i] >= '0' && s[i] <= '9') {
        dig += 1;
      }
    }
    printf("%d %d %d\n", cap, sml, dig);
  }

  return 0;
}