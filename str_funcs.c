#include "str.h"
#include <stdio.h>
int mystrlen(char * source){
  int ctr = 0;
  while(*source){
    source++;
    ctr++;
  }
  return ctr;
}

//char* mystrncpy(char *dest, char *source, int n);

//char* mystrcat(char *dest, char *source);

//char* mystrchr(char *s, char c);

//char* mystrstr(char *s1, char *s2);

int mystrcmp(char *s1, char *s2){
  int total = 0;

  while(*s1){
    total += *s1;
    s1++;
  }

  while(*s2){
    total -= *s2;
    s2++;
  }
  return total;
}
