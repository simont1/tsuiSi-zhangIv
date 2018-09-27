#include "str.h"

int findLength(char * source){
  int ctr = 0;
  while(*source){
    source++;
    ctr++;
  }
  return ctr;
}
