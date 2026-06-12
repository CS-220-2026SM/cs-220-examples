#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toLower(char str[]){
  // TODO: convert upper case letters in str to lower case in-place
}

char *toLowerCpy(char str[]){
  // TODO: make a copy of str, convert upper case -> lower case, and return a pointer to it
  return NULL;
}

int main(){
  char *str1 = "Hello, World!";
  printf("BEFORE: %s\n", str1);
  toLower(str1);
  printf("AFTER: %s\n", str1);
  printf("ORIGINAL: %s\n", str1);
  char *str2 = toLowerCpy(str1);
  printf("NEW: %s\n", str2);
  return 0;
}
