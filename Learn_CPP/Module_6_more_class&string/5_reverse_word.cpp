#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;
  getline(cin, n);
  stringstream str_brk(n);
  string word;

  str_brk >> word;
  reverse(word.begin(), word.end());
  cout << word;  // print first word

  while (str_brk >> word) {
    reverse(word.begin(), word.end());
    cout << " " << word;
  }

  return 0;
}