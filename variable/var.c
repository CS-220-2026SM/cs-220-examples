#include <stdio.h>

int main(){
  int num = 100;
  // & is the reference operator
  printf("value of num = %d, address = %p\n", num, &num);
  int *ptr; // "int *" is a pointer to an int
  ptr = &num;
  printf("value of ptr = %p, address of ptr = %p\n", ptr, &ptr);
  // * is the derefernce operator
  printf("ptr points to %d\n", *ptr);
  *ptr = 200;
  printf("value of num = %d, address = %p\n", num, &num);
  return 0;
  
}
