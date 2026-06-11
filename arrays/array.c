#include <stdio.h>
#include <stdlib.h>

int sumAry(int ary[], int len);

#define SIZE 5

int main(){
  
  int ary[SIZE];
  int ary1[] = {1,2,3,4,5,6};
  printf("sizeof(ary1) = %ld\n", sizeof(ary1));
  printf("sizeof(int) = %ld\n", sizeof(int));
  for (int i = 0; i < SIZE; i++){
    ary[i] = i+1;
    printf("ary[%d] = %d\n",i,ary[i]);
  }
  printf("sum = %d\n", sumAry(ary,SIZE));
}

int sumAry(int ary[], int len){
  // TODO: compute the sum of the elements in the array
  int sum = 0;
  // int len = sizeof(ary)/sizeof(int);
  for (int i = 0; i < len; i++){
    sum += ary[i];
  }
  return sum; 
}
