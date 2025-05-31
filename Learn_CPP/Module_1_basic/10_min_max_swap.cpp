#include <algorithm>
#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  cout << "Min: " << min(a, b) << endl;
  cout << "Multiple min: " << min({9, 2, 7, 10, 4, 2}) << endl;
  int x = 1, y = 2;
  swap(x, y);
  cout << "swap: " << x << " " << y << endl;
  return 0;
}