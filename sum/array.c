#include <stdio.h>
#include <stdlib.h>

int main(){
  // TODO: allocate array on the heap
  // initialize it using pointer notation
  // access and sum its elements using array notation
  // recall: ary[i] = *(ary+i)
  int sum = 0;
  int *ary = malloc(sizeof(int)*10); // allocate an array on the heap
  int *temp = ary;
  for (int i = 0; i < 10; i++){
    *temp = 2*i + 1;
    printf("ary = %p, temp = %p\n", ary, temp);
    sum += ary[i];
    temp++; // adds sizeof(int) to pointer
  }
  printf("sum = %d\n",sum);
  return 0;
}
