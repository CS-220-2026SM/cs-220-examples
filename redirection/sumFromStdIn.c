#include <stdio.h>

int main(){
  int num;
  int sum = 0;
  while(1){
    int result = scanf("%d", &num); // stores number from input in num variable
    if (result == 1) sum += num; // successfully read an int
    else if (result == -1) break; // read EOF character
  }
  printf("sum = %d\n", sum);
}
