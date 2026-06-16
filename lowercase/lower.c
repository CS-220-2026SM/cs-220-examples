#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void toLower(char str[]){
  // TODO: convert upper case letters in str to lower case in-place
  // recall: 'A' = 0x41, 'Z' = 0x5a; 'a' = 0x61, 'z' = 0x7a
  int len = strlen(str);
  for (int i = 0; i < len; i++){
    if (str[i] >= 0x41 && str[i] <= 0x5a)
      str[i] += 0x20;
  }
}

char *toLowerCpy(char str[]){
  // TODO: make a copy of str, convert upper case -> lower case, and return a pointer to it
  int len = strlen(str);
  char *newStr = malloc(len*sizeof(char)+1);
  strcpy(newStr,str);
  for (int i = 0; i < len; i++){
    if (newStr[i] >= 0x41 && newStr[i] <= 0x5a)
      newStr[i] += 0x20;
  }
  return newStr;
}

int main(){
  char *str1 = "Hello, World!"; // initializing as pointer to string literal
  char str3[] = "Hello, World!"; // initialing as array on stack
  printf("BEFORE: %s\n", str3);
  toLower(str3);
  printf("AFTER: %s\n", str3);
  printf("ORIGINAL: %s\n", str1);
  char *str2 = toLowerCpy(str1);
  printf("NEW: %s\n", str2);
  free(str2);
  return 0;
}
