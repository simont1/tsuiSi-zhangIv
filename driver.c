#include "str.h"
#include "mylen.c"

#include <stdio.h>

int main(){
  //testing strlen implementation (file: mylen.c)
  char * s1 = "apples";
  printf("%p\n", s1);
  printf("%s\n", s1);
  printf("%d\n", findLength(s1));
  //testing strchr implementation (file: mychr.c)
}
