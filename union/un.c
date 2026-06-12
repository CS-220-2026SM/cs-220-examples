#include <stdio.h>
#include <stdlib.h>

int main(){
  union intBytes{
    int val;
    unsigned char bytes[4];
  } num;
  // TODO: print the bytes of num in order
  return 0;
}
