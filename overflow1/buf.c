#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
  if (argc < 3){
    fprintf(stderr, "Usage: ./buf num1 num2 message\n");
    return 1;
  }
  int a = atoi(argv[1]);
  int b = atoi(argv[2]);
  int sum = a+b;
  char msg[10];
  strcpy(msg,argv[3]);
  printf("message: %s\n", msg);
  printf("0x%x + 0x%x = 0x%x\n",a,b,sum);
  return 0;
}
