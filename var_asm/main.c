#include <stdio.h>

void set_asm(int *ptr, int num); // set the value ptr points to to num

int main(){
  int a = 100;
  printf("a = %d\n",a);
  set_asm(&a, 200);
  printf("a = %d\n", a);
  return 0;
}
