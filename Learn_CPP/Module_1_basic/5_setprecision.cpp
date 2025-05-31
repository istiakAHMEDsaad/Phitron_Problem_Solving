#include <iomanip>
#include <iostream>
using namespace std;
int main() {
  double d = 23.4567;
  cout << fixed << setprecision(2) << d << endl;
  return 0;
}