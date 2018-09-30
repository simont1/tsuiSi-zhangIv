#include "str.h"
#include <stdio.h>
#include <string.h> //temporary
int mystrlen(char * source){
  int ctr = 0;
  while(*source){
    source++;
    ctr++;
  }
  return ctr;
}

char* mystrncpy(char *dest, char *source, int n){
  char *inc = dest;
  while(n > 0){
    if(*source){
      *inc = *source;
      source++;
    }
    else{
      *inc = '\0';
    }
    inc++;
    n-=1;
  }

  return dest;
}

char* mystrcat(char *dest, char *source){
  char *inc = dest + mystrlen(dest);

  while(*source){
    *inc = *source;
    inc++;
    source++;
  }
  //*inc = '\0';
  return dest;


}

//char* mystrstr(char *s1, char *s2);

int mystrcmp(char *s1, char *s2){
  int total = 0;

  while(*s1 == *s2 && (*s1 || *s2)){ 
    s1++;
    s2++;
  }
  return *s1-*s2;

}



char* mystrchr(char *s, char c){
  char *upTo = s + mystrlen(s);
  
  while(*s && *s != c){
    s++;
  }

  if(c != 0 && s == upTo){
    return 0x0;
  }
  return s;
}
