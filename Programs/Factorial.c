#include <stdio.h>
long factorial(int n);
int main() {
  int n;
  printf("Enter a number: ");
  scanf("%d",&n);
  printf("Factorial of number: %ld",factorial(n));
  return 0;
}
long factorial(int n) {
  int fact=1,i;
  for(i=n;i>0;i++) {
    fact*=i;
  }
  return fact;
}