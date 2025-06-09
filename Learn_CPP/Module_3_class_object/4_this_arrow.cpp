#include <bits/stdc++.h>
using namespace std;

class Student {
 public:
  int roll;
  int cls;
  double cgpa;

  Student(int roll, int cls, double cgpa) {
    (*this).roll = roll;  // this->roll = roll;
    (*this).cls = cls;
    (*this).cgpa = cgpa;
  }
};

int main() {
  int r1, r2;
  int c1, c2;
  double cg1, cg2;

  cout << "enter person 1 roll: ";
  cin >> r1;
  cout << "enter person 2 roll: ";
  cin >> r2;

  cout << "enter person 1 class: ";
  cin >> c1;
  cout << "enter person 2 class: ";
  cin >> c2;

  cout << "enter person 1 cgpa: ";
  cin >> cg1;
  cout << "enter person 2 cgpa: ";
  cin >> cg2;

  Student rahim(r1, c1, cg1);
  Student karim(r2, c2, cg2);

  cout << "rahim roll: " << rahim.roll << ", rahim class: " << rahim.cls
       << ", rahim cgpa: " << rahim.cgpa << endl;
  cout << "karim roll: " << karim.roll << ", karim class: " << karim.cls
       << ", karim cgpa: " << karim.cgpa << endl;

  return 0;
}