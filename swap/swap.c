#include <stdio.h>

void swap(int *ptr1, int *ptr2);

int main(){
  int a = 100;
  int b = 200;

  printf("a = %d, b = %d\n",a,b);
  swap(&a,&b);
  printf("a = %d, b = %d\n",a,b);

  return 0;
}

void swap(int *ptr1, int *ptr2){
  // TODO: swap a and b
  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}
