#include <stdio.h>
#include <stdlib.h>

extern void func1(long *);

long ary[4] = {1,-3,60,11};

int main(){
  func1(ary);
  return 0;
}
