#include<stdio.h>
int main() {
  int A[100],i, sum = 0,n;
  int *ptr;
  printf("\nEnter number of elements: ");
  scanf("%d",&n);
  printf("Enter the array elements:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", &A[i]);
  }
  ptr = A;
  for (i = 0; i < 10; i++) {
    sum+=*(ptr+i);
  }
  printf("The sum of array elements: %d\n", sum);
}