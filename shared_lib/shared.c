#include <stdio.h>
#include <stdlib.h>
#include <shared.h>

void *logger_malloc(unsigned int size){
  void *ret;
  printf("Allocating %u bytes...\n",size);
  ret = malloc(size);
  if (ret == 0) {
    printf("allocation failed!\n");
  }
  else {
    printf("successfully allocated at %p\n", ret);
  }
  return ret;
}

void logger_free(void *p){
  printf("freeing memory at %p...\n",p);
  free(p);
  printf("DONE!\n");
}
