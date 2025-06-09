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
  Student rahim(10, 11, 4.5);
  Student* karim = new Student(8, 11,  4.8);

  cout << "rahim roll: " << rahim.roll << ", rahim class: " << rahim.cls
       << ", rahim cgpa: " << rahim.cgpa << endl;
  
       cout << "karim roll: " << (*karim).roll << ", karim class: " << (*karim).cls
       << ", karim cgpa: " << (*karim).cgpa << endl;

  return 0;
}