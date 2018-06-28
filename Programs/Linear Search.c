#include <stdio.h>
void main()
{
	int A[10],n,i,ele,flag=0;
	printf("enter number of elements\n");
	scanf("%d",&n);
	printf("enter array elements\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	printf("enter elements to be searched for\n");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if(A[i]==ele)
		{
			flag=1;
			break;
		}
	}
	if (flag)
	{
		printf("element found at %d place\n",i+1);
	}
	else
	{
		printf("element not found\n");
	}
}