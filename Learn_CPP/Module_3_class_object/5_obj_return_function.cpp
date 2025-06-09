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

Student studenOne() {  // <-- return type
  Student rahim(122, 10, 4.9);
  return rahim;
}

int main() {
  //   int r1, r2;
  //   int c1, c2;
  //   double cg1, cg2;

  //   cout << "enter person 1 roll: ";
  //   cin >> r1;
  //   cout << "enter person 2 roll: ";
  //   cin >> r2;

  //   cout << "enter person 1 class: ";
  //   cin >> c1;
  //   cout << "enter person 2 class: ";
  //   cin >> c2;

  //   cout << "enter person 1 cgpa: ";
  //   cin >> cg1;
  //   cout << "enter person 2 cgpa: ";
  //   cin >> cg2;

  //   Student rahim(r1, c1, cg1);
  Student stu1 = studenOne();
  Student karim(314, 10, 4.8);

    cout << "rahim roll: " << stu1.roll << ", rahim class: " << stu1.cls
         << ", rahim cgpa: " << stu1.cgpa << endl;
  cout << "karim roll: " << karim.roll << ", karim class: " << karim.cls
       << ", karim cgpa: " << karim.cgpa << endl;

  return 0;
}