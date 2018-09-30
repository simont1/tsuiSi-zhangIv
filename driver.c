#include "str.h"
#include <stdio.h>
#include <string.h>

int main(){
  char s1[20] = "?W?";
  char s2[20] = "hello";
  char s3[20] = "goodbye";


  printf("s1: [%s]\n", s1);
  printf("s2: [%s]\n", s2);
  printf("s3: [%s]\n\n", s3);


  //testing strlen implementation
  printf("Testing strlen(s2):\n");
  printf("[standard]:[%ld]\n", strlen(s2));
  printf("[mine]:[%d]\n\n", mystrlen(s2));

  //testing mystrncpy implementation
  printf("Testing strncpy(s1, s3, 3):\n");
  printf("[standard]:[%s]\n", strncpy(s1, s3, 3));
  printf("[mine]:[%s]\n\n", mystrncpy(s1, s3, 3));

  char s4[20] = "?W?";
  char s5[20] = "hello";
  char s6[20] = "goodbye";
  //testing strcat implementation
  printf("Testing strcat(s1,s3):\n");
  printf("[standard]:[%s]\n", strcat(s4, s6));
  char s10[20] = "?W?";
  char s30[20] = "goodbye";
  printf("[mine]:[%s]\n\n", mystrcat(s10, s30));

  char s7[20] = "?W?";
  char s8[20] = "hello";
  char s9[20] = "goodbye";
  //testing strchr implementation (file: mystrchr.c)
  printf("Testing strchr(s8, 'l'):\n");
  printf("[standard]:[%p]\n", strchr(s8, 'l'));
  printf("[mine]:[%p]\n\n", mystrchr(s8, 'l'));

  printf("Testing strchr(s7, 0):\n");
  printf("[standard]:[%p]\n", strchr(s7, 0));
  printf("[mine]:[%p]\n\n", mystrchr(s7, 0));

  printf("Testing strchr(s7, 'z'):\n");
  printf("[standard]:[%p]\n", strchr(s7, 'z'));
  printf("[mine]:[%p]\n\n", mystrchr(s7, 'z'));


  char str1[20] = "needle";
  char str2[20] = "haystackneedle";
  char str3[20] = "hayneedlestack";
  char str4[20] = "pickle";
  char str5[20] = "ham";



  printf("Testing strstr(str2, str1):\n");
  printf("[standard]:[%p]\n", strstr(str2, str1));
  printf("[mine]:[%p]\n", mystrstr(str2, str1));

  printf("Testing strstr(str3, str1):\n");
  printf("[standard]:[%p]\n", strstr(str3, str1));
  printf("[mine]:[%p]\n\n", mystrstr(str3, str1));

  printf("Testing strstr(str4, str1):\n");
  printf("[standard]:[%p]\n", strstr(str4, str1));
  printf("[mine]:[%p]\n\n", mystrstr(str4, str1));

  printf("Testing strstr(str4, str1):\n");
  printf("[standard]:[%p]\n", strstr(str4, str1));
  printf("[mine]:[%p]\n\n", mystrstr(str4, str1));

  printf("Testing strstr(str5, str1):\n");
  printf("[standard]:[%p]\n", strstr(str5, str1));
  printf("[mine]:[%p]\n\n", mystrstr(str5, str1));


  //testing strcmp implementation
  printf("Testing strcmp:\n");

  char *s11 = "ab";
  char *s12 = "abc";
  printf("Comparting ab to abc:\n");
  printf("[standard]:[%d]\n", strcmp(s11, s12));
  printf("[mine]:[%d]\n\n", mystrcmp(s11, s12));

  printf("Comparting abc to ab:\n");
  printf("[standard]:[%d]\n", strcmp(s12, s11));
  printf("[mine]:[%d]\n\n", mystrcmp(s12, s11));

  printf("Comparting abc to abc:\n");
  printf("[standard]:[%d]\n", strcmp(s12, s12));
  printf("[mine]:[%d]\n\n", mystrcmp(s12, s12));


}
