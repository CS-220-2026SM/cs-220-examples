#include <stdio.h>

int a = 3;
int b;


int main(int argc,char *argv[]){
  /* argv[0] = ./hello
     argv[1] = argument 1
     argv[2] = arguemnt 2
     ...
  */
  while (b < a){
    for (int i = 1; i < argc; i++){
      printf("Hello, %s!\n", argv[i]);
    }
    b++;
  }
  return 0;
}
