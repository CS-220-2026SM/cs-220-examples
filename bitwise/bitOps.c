#include <stdio.h>
#include <stdlib.h>

#define BIT(n) (1UL << (n))
#define MASK(len,n) (((1UL << (len))-1) << (n))

void setBit(unsigned long *val, int pos){
  // TODO: set the bit in pos 'pos' to 1
  *val |= BIT(pos);
}

void flipBit(unsigned long *val, int pos){
  // TODO: toggle the bit in position 'pos' from 0 to 1 or from 1 to 0
  *val ^= BIT(pos);
}

void clearBit(unsigned long *val, int pos){
  // TODO: set the bit in position 'pos' to 0
  *val &= ~BIT(pos);
}

void flipBitFld(unsigned long *val, int len, int pos){
  // TODO: toggle the 'len' bits starting in position 'pos'
  *val ^= MASK(len,pos);
}
