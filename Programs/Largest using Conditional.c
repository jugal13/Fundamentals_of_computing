#include <stdio.h>
int main() {
  int a,b,c,l;
  printf("Enter 3 numbers: ");
  scanf("%d%d%d",&a,&b,&c);
  (a>b)?(a>c)?l=a:l=c:(b>c)?l=b:l=c;
  printf("Largest: %d\n",l);
  return 0;
}