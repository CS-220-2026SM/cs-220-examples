#include <stdlib.h> // for malloc and free
#include "coord.h"

struct coord_struct {
  int x;
  int y;
};

coord coord_create(int x, int y){
  // use malloc to allocate space on the heap
  // for the coordinate pair (x,y)
  coord newCoord = malloc(sizeof(struct coord_struct));
  newCoord->x = x;
  newCoord->y = y;
  return newCoord; 
}

int coord_getx(coord xy){
  // return x-coordinate
  return xy->x; 
}

int coord_gety(coord xy){
  // return y-coordinate
  return xy->y; 
}
