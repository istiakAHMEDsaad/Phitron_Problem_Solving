#include <stdio.h>

int main() {
  short int x;
  scanf("%hi", &x);
  short int num = x / 1000;
  if(num%2 == 0){
    printf("EVEN");
  }else{
    printf("ODD");
  }

  return 0;
}