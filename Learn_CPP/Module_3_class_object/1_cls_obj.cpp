#include <bits/stdc++.h>
using namespace std;

class Student {
 public:
  char name[101];
  int roll;
  double gpa;
};

int main() {
  Student obj;
  obj.roll = 10;
  obj.gpa = 4.5;
  char temp[100] = "Saad";
  strcpy(obj.name, temp);

  cout << "name: " << obj.name << ", " << "roll: " << obj.roll << ", "
       << "cgpa: " << obj.gpa << endl;

  return 0;
}