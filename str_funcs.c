#include "str.h"
#include <stdio.h>

int mystrlen(char * source){
  int ctr = 0;
  while(*source){
    source++;
    ctr++;
    //goes through char source until terminating null
  }
  return ctr;
}

char* mystrncpy(char *dest, char *source, int n){
  char *inc = dest;
  //inc points to dest
  while(n > 0){
    if(*source){
      *inc = *source;
      source++;
      //copies char by char for n number of chars
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
  //skips to the end of the string
  while(*source){
    *inc = *source;
    inc++;
    source++;
  }
  //*inc = '\0';
  return dest;


}

int mystrcmp(char *s1, char *s2){
  while(*s1 == *s2 && (*s1 || *s2)){
    s1++;
    s2++;
  }
  //adds up totals such that s1 and s2 have similar chars and still exist
  return *s1-*s2;

}

char* mystrchr(char *s, char c){
  char *upTo = s + mystrlen(s);
  //skips to the end of the string
  while(*s && *s != c){
    s++;
  }
  //looks for c in s up until no more s
  if(c != 0 && s == upTo){
    return 0x0;
  }
  return s;
}

char* mystrstr(char *s1, char *s2){
  char *temp = s2;
  int str_here = 0;
  while(*s1){
    temp = s2;
    str_here = 0;
    while(*s1 && *s1 == *temp){
      temp++;
      s1++;
      str_here++;
      //printf("%d\n", str_here);
    }
    //checks to see if substr is in str by counting # of similar consecutive chars
    if(mystrlen(s2) == str_here){
      return s1-str_here;
    }//if same number of consecutive chars, return location
    s1++;
  }

  return 0x0;


};
