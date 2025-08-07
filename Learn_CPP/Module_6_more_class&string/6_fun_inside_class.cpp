#include <bits/stdc++.h>
using namespace std;

class Student {
 public:
  string name;
  int roll;
  int math;
  int english;

  Student(string name, int roll, int math, int english) {
    this->name = name;
    this->roll = roll;
    this->math = math;
    this->english = english;
  }

  void total_mark() {
    cout << "total marks of '" << name << "' = " << math + english << endl;
  }
};

int main() {
  Student stu_one("Farid ahmed", 20, 82, 80);
  stu_one.total_mark();
  cout << "Student one name: " << stu_one.name << endl;
  
  cout << endl;
  
  Student stu_two("Jabir uddin", 16, 86, 83);
  stu_two.total_mark();
  cout << "Student two name: " << stu_two.name << endl;
  return 0;
}