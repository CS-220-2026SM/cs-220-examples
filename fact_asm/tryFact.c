#include <stdio.h>
#include <stdlib.h>

long fact_asm(long n); // returns n factorial using recursion

int main(int argc, char *argv[]){
  long n = atoi(argv[1]);
  printf("fact(%ld) = %ld\n", n, fact_asm(n));
  return 0;
}
