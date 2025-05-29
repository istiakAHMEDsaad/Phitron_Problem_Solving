#include <iostream>
using namespace std;
int main() {
  char cha1, cha2;
  cout << "enter two letter for a ascii value: ";
  cin >> cha1 >> cha2;
  int asc = cha1;
  cout << "ascii value: " << asc << " " << (int)cha2 << endl;
  return 0;
}