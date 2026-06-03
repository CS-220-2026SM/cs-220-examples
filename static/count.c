#include <stdio.h> // for printf
#include <stdlib.h> // for atoi


void foo(){
  // print the number of times the function has been called
  static int counter = 0;
  counter++;
  printf("Run %d times\n", counter);
}

int main(int argc, char *argv[]){
  // take a number as a command line argument and
  // call foo() that many times
  int num = atoi(argv[1]); // ascii to int
  for (int i = 0; i < num; i++){
    foo();
  }
  return 0;
}
