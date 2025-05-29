#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  char s[10001];
  scanf("%s", &s);

  int freq[26] = {0};  // freq[3]=1

  for (int i = 0; i < strlen(s); i++) {
    freq[s[i] - 'a']++;  // saad [19-1=18, 1-1=0, 1-1=0, 4-1=3]
  }

  for (char j = 'a'; j <= 'z'; j++) {
    if (freq[j - 'a'] > 0) {
      printf("%c - %d\n", j, freq[j - 'a']);
    }
  }
  return 0;
}
