#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toLower_asm(char str[]);

/* void toLower(char str[]){
  // TODO: convert upper case letters in str to lower case in-place
  // recall: 'A' = 0x41, 'Z' = 0x5a; 'a' = 0x61, 'z' = 0x7a
  int len = strlen(str);
  for (int i = 0; i < len; i++){
    if (str[i] >= 0x41 && str[i] <= 0x5a)
      str[i] += 0x20;
  }
  } */

int main(){
  char *str = malloc(64*sizeof(char)); // initialing as array on heap
  strcpy(str,"Hello, World!");
  printf("BEFORE: %s\n", str);
  toLower_asm(str);
  printf("AFTER: %s\n", str);
  free(str);
  return 0;
}
