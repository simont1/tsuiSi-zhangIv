#include "str.h"

int mystrlen(char * source){
  int ctr = 0;
  while(*source){
    source++;
    ctr++;
  }
  return ctr;
}

char* mystrncpy(char *dest, char *source, int n);

//char* mystrcat(char *dest, char *source);

//char* mystrchr(char *s, char c);

//char* mystrstr(char *s1, char *s2);

//char* mystrcmp(char *s1, char *s2);
