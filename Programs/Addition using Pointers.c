#include <stdio.h>
void main()
{
	int A[10],i,n,*p,sum=0;
	p=A;
	printf("enter the number of elements\n");
	scanf("%d",&n);
	printf("Enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+*(p+i);
	}
	printf("sum=%d\n",sum);
}