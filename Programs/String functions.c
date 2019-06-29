#include <stdio.h>
int main() {
  char str1[100],str2[100],str3[100]="Random";
  char *p;
  printf("Enter two strings:\n");
  scanf("%s %s",str1,str2);
  printf("String Comparision:\n");
  if(!strcmp(s1,s2)) {
    printf("Strings are same\n");
  }
  else {
    printf("Strings are not same\n")
  }
  printf("String Copy")
  printf("String Concat:\n");
  str3.strcpy(str1);
  str3.concat(str2);
  printf("Concatenated Strings is: %s",str3); 
  p = strstr(s1, s2);
  if (p) { 
    printf("First occurrence of string '%s' in '%s' is '%s'", s2, s1, p); 
  } else {
    printf("String not found\n"); 
  }
  return 0;
}