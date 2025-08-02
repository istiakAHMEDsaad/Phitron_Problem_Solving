#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cout << "Enter a text: ";
  getline(cin, s);
  // cout << "Output: " << s << endl;

  // take untill it finds space
  stringstream ss(s);  //'ss' is the object of the stringstream class,
                       // streamstream breakdown all word!
  string word;
  int count = 0;
  while (ss >> word) {
    cout << word << endl;
    count++;
  }
  cout << "total word number: " << count << endl;

  /* ss >> word;
  cout << "Showing output where it gets space--> " << word << endl;

  ss >> word;
  cout << "Showing output where it gets space--> " << word << endl; */

  return 0;
}