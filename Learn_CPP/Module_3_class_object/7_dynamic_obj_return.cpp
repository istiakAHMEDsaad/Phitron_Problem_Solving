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

Student* fun() {
  Student* karim = new Student(1, 10, 5);
  return karim;
}

int main() {
  Student* p = fun();

  cout << "roll: " << p->roll << ", class: " << p->cls << ", cgpa: " << p->cgpa
       << endl;

  return 0;
}