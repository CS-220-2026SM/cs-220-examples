#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
  // print a message to stderr if too few arguments were provided
  if (argc < 3){
    fprintf(stderr, "provided %d argument(s), but needed 2\n", argc-1);
    return 1;
  }
  int num = atoi(argv[1]);
  int max = atoi(argv[2]);
  // TODO: print all multiples of 'num' up to 'max', each on a separate line
  
  return 0;
}
