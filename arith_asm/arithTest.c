#include <stdio.h>
#include <stdlib.h>
#include "arith.h"

int main(int argc, char *argv[]){
  /* TODO: Get the two integers passed in through the command line
     and perform each of the operations defined in arith.c,
     printing the result in the form "1 + 2 = 3".
     We will need to use the "atoi" function to convert the
     command line arguments from ascii to integers, and
     the "printf" function to print our result.
  */
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  printf("%d + %d = %d\n", a, b, add_asm(a,b));
  printf("%d - %d = %d\n",a,b,sub_asm(a,b));
  printf("%d * %d = %d\n",a,b,mul_asm(a,b));
  printf("%d / %d = %d\n",a,b,divide_asm(a,b));
  printf("%d %% %d = %d\n",a,b,remain_asm(a,b));
  printf("%d ** %d = %d\n",a,b,expnt_asm(a,b));
  
  return 0;
}
