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



char * mystrchr(char *s, char c){
  char firstLoc = 0;
  char initLen = mystrlen(s);
  char * ans = &firstLoc;
  while(strcmp(&c, s) && mystrlen(s)){
    s++;
    firstLoc++;
    //use strcmp(c, s)
  }
  // printf("%d\n", firstLoc);
  // printf("%d\n", initLen);
  // printf("%d\n", firstLoc == initLen);
  if (firstLoc == initLen){
    return "nil";
  }
  return ans;
}
