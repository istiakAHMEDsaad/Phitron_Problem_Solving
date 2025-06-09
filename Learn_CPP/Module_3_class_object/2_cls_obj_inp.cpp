#include <bits/stdc++.h>
using namespace std;

class Student {
 public:
  char name[51];
  int roll;
  float cgpa;
};

int main() {
  Student a, b;
  cin.getline(a.name, 50);
  cin >> a.roll >> a.cgpa;
  cin.ignore();

  cin.getline(b.name, 50);
  cin >> b.roll >> b.cgpa;

  cout << "your name 1: " << a.name << ", your roll 1: " << a.roll
       << ", your cgpa 1: " << setprecision(3) << a.cgpa << endl;

  cout << "your name 2: " << b.name << ", your roll 2: " << b.roll
       << ", your cgpa 2: " << setprecision(3) << b.cgpa << endl;

  return 0;
}