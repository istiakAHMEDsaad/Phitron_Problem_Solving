#include <bits/stdc++.h>
using namespace std;

class Student {
 public:
  int id;
  string name;
  char section;
  int marks;
};

int main() {
  int n;
  cin >> n;

  Student top;

  for (int i = 0; i < n; i++) {
    for (int i = 1; i <= 3; i++) {
      Student tem;
      cin >> tem.id >> tem.name >> tem.section >> tem.marks;

      if (i == 1) {
        top = tem;
      } else {
        if (tem.marks > top.marks) {
          top = tem;
        } else if (tem.marks == top.marks) {
          if (tem.id < top.id) {
            top = tem;
          }
        }
      }
    }
    cout << top.id << " " << top.name << " " << top.section << " " << top.marks
         << endl;
  }
}