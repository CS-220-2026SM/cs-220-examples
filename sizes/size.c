#include <stdio.h>
#include <stdlib.h>

struct str1{
  unsigned long u;
  int n;
  long l;
};

struct str2{
  short s;
  float f;
  char ary[21];
};

int main(){
  struct str1 *p1 = malloc(sizeof(struct str1));
  struct str2 *p2 = malloc(sizeof(struct str2));

  printf("p1->u at byte %ld\n", (void *) &(p1->u) - (void *) p1);
  printf("p1->n at byte %ld\n", (void *) &(p1->n) - (void *) p1);
  printf("p1->l at byte %ld\n", (void *) &(p1->l) - (void *) p1);
  printf("sizeof(struct str1) = %ld\n", sizeof(struct str1));
  printf("p2->s at byte %ld\n", (void *) &(p2->s) - (void *) p2);
  printf("p2->f at byte %ld\n", (void *) &(p2->f) - (void *) p2);
  printf("p2->ary at byte %ld\n", (void *) &(p2->ary) - (void *) p2);
  printf("sizeof(struct str2) = %ld\n", sizeof(struct str2));
}
