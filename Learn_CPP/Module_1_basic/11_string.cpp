#include <iostream>
using namespace std;
int main() {
  int x;
  cout << "enter a value: ";
  cin >> x;

  cin.ignore();

  char s[100];
  // cin>>s;, fgets(s, 100, stdin)
  cout << "Enter your name: ";
  cin.getline(s, 100);
  cout << "your value: " << x << " & " << "name: " << s << endl;

  return 0;
}