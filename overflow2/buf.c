#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int getNumber(){
  char buffer[20];
  printf("Guess a number:\n");
  gets(buffer);
  int num = atoi(buffer);
  return num;
}

void target(){
  printf("That is correct!\n");
  exit(0);
}

int main(int argc, char** argv) {
  int fd = open("/dev/urandom", O_RDONLY);
  if(fd == -1){
    fprintf(stderr, "Unable to open file\n");
    return -1;
  }
  int secret;
  if(read(fd, &secret, sizeof(int)) != sizeof(int)){
    fprintf(stderr, "Read error!\n");
    return 1;
  }
  close(fd);
  
  int guess = getNumber();
  if (guess == secret){
    target();
  }
  else
    printf("Incorrect guess.\n");
  return 0;
}
  
