#include <bits/stdc++.h>
using namespace std;

class Cricketer {
 public:
  int jersey;
  string country;

  Cricketer(string country, int jersey) {
    this->country = country;
    this->jersey = jersey;
  }
};

int main() {
  Cricketer* player1 = new Cricketer("Newzeland", 55);
  Cricketer* player2 = new Cricketer("Germany", 10);

  /* player1->country = player2->country;
  player1->jersey = player2->jersey; */
  *player2 = *player1;
  delete player1;
  cout << player2->country << " " << player2->jersey << endl;
  return 0;
}
