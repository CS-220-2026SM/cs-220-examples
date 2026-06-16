#include <stdio.h>
#include <stdlib.h>

int main(){
  union intBytes{
    int val;
    unsigned char bytes[4];
  } num;
  // TODO: print the bytes of num in order
  num.val = 0x12345678;
  
  for (int i = 0; i < 4; i++){
    printf("num.bytes[%d] = 0x%x\n", i, num.bytes[i]);
  }
  num.bytes[0] = 0x99;
  num.bytes[2] = 0x99;
  printf("num = 0x%x\n", num.val);
  printf("sizeof(num) = %ld\n", sizeof(num));
  return 0;
}
