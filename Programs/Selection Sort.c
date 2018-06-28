#include <stdio.h>
void Sort(int A[],int n)
{
	int i,j,min,temp;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(A[j]<A[min])
				min=j;
		}
		temp=A[i];
		A[i]=A[min];
		A[min]=temp;
	}
}
int main()
{
	int A[100],i,j,n;
	printf("enter size of array\n");
	scanf("%d",&n);
	printf("enter the array\n");
	for(i=0;i<n;i++)
		scanf("%d",&A[i]);
	Sort(A,n);
	printf("Sorted Array is\n");
	for(i=0;i<n;i++)
		printf("%d\t",A[i]);
	printf("\n");
}