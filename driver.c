#include "str.h"
#include "mylen.c"

#include <stdio.h>
#include <string.h>

int main(){
  char *s1 = "?W?";
  char *s2 = "hello";
  char *s3 = "goodbye";

  printf("s1: [%s]\n", *s1);
  printf("s2: [%s]\n", *s2);
  printf("s3: [%s]\n\n", *s3);

  
  //testing strlen implementation (file: mylen.c)
  printf("Testing strlen(s2):\n");
  //printf("[standard]:[%d]\n", strlen(s2));
  //printf("[mine]:[%d]\n\n", mystrlen(s2));

  
  //testing mystrcpy implementation (file: mystrcpy.c)  
  printf("Testing strcpy(s1, s2):\n");
  //printf("[standard]:[%s]\n", strcpy(s1, s2));
  //printf("[mine]:[%s]\n\n", mystrcpy(s1, s2));

  
  //testing mystrncpy implementation (file: mystrncpy.c)  
  printf("Testing strncpy(s1, s3, 3):\n");
  //printf("[standard]:[%d]\n", strncpy(s1, s3, 3));
  //printf("[mine]:[%d]\n\n", mystrncpy(s1, s3, 3));

  
  //testing strcat implementation (file: mystrcat.c)  
  printf("Testing strcat(s1,s3):\n");
  //printf("[standard]:[%s]\n", strcat(s1, s3));
  //printf("[mine]:[%s]\n\n", mystrcat(s1, s3));

  
  //testing strncat implementation (file: strncat.c)  
  printf("Testing strncat(s1, s2, 3):\n");
  //printf("[standard]:[%s]\n", strncat(s1, s2, 3));
  //printf("[mine]:[%s]\n\n", mystrncat(s1, s2, 3));

  
  //testing strchr implementation (file: mystrchr.c)  
  printf("Testing strchr(s1, 'l'):\n");
  //printf("[standard]:[%p]\n", strchr(s1, 'l'));
  //printf("[mine]:[%p]\n\n", mystrchr(s1, 'l'));

  printf("Testing strchr(s1, 0):\n");
  //printf("[standard]:[%p]\n", strchr(s1, 0));
  //printf("[mine]:[%p]\n\n", mystrchr(s1, 0));
  
  printf("Testing strchr(s1, 'z'):\n");
  //printf("[standard]:[%p]\n", strchr(s1, 'z'));
  //printf("[mine]:[%p]\n\n", mystrchr(s1, 'z'));


  //testing strcmp implementation (file: mystrcmp.c)    
  printf("Testing strcmp:\n");
  
  printf("Comparting ab to abc:\n");
  //printf("[standard]:[%d]\n", strcmp('ab', 'abc'));
  //printf("[mine]:[%d]\n\n", mystrcmp('ab', 'abc'));
  
  printf("Comparting abc to ab:\n");
  //printf("[standard]:[%d]\n", strcmp('abc', 'ab'));
  //printf("[mine]:[%d]\n\n", mystrcmp('abc', 'ab'));
  
  printf("Comparting abc to abc:\n");
  //printf("[standard]:[%d]\n", strcmp('abc', 'abc'));
  //printf("[mine]:[%d]\n\n", mystrcmp('abc', 'abc'));
  

  
  //testing strlen implementation (file: mylen.c)
  //char * s1 = "apples";
  //printf("%p\n", s1);
  //printf("%s\n", s1);
  //printf("%d\n", findLength(s1));

  //testing strchr implementation (file: mychr.c)
}
