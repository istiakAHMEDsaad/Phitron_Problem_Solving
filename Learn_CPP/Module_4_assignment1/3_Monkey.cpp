#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  while (getline(cin, s)) {
    int freq[26] = {0};
    for (int i = 0; i < s.length(); i++) {
      freq[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
      if (freq[i] > 0) {
        for (int j = 0; j < freq[i]; j++) {
          cout << (char)(i + 'a');
        }
      }
    }
    cout << endl;
  }

  return 0;
}