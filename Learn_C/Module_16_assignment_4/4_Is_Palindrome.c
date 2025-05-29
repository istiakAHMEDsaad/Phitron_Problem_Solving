#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int is_palindrome(char s[]) {
  int len = strlen(s);

  int first = 0, last = len - 1;

  while (first < last) {
    if (s[first] != s[last]) {
      return 0;
    }
    first++;
    last--;
  }

  return 1;
}

int main() {
  char s[1001];
  scanf("%s", &s);

  int palindrome = is_palindrome(s);
  if (palindrome == 1) {
    printf("Palindrome\n");
  } else {
    printf("Not Palindrome\n");
  }

  return 0;
}