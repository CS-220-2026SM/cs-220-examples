#include <stdio.h>

int main(int argc,char *argv[]){
  /* argv[0] = ./hello
     argv[1] = argument 1
     argv[2] = arguemnt 2
     ...
  */
  // print "Hello, world!"
  for (int i = 1; i < argc; i++){
    printf("Hello, %s!\n", argv[i]);
  }
  return 0;
}
