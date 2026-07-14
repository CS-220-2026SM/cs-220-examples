#include <stdio.h>

void swap_asm(int *a, int *b);

int main(){
  int a = 100;
  int b = 200;
  int c = 300;
  printf("a = %d, b = %d, c = %d\n",a,b,c);
  printf("swapping b and c...\n");
  swap_asm(&b,&c);
  printf("a = %d, b = %d, c = %d\n",a,b,c);

  return 0;
}
