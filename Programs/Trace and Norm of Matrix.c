#include <stdio.h>
#include <math.h>
void main()
{
	int i,j,A[10][10],m,n,trace=0,sum=0;
	float norm;
	printf("enter the order\n");
	scanf("%d%d",m,n);
	if (m==n)
	{
		printf("enter the matric\n");
		for (i=0;i<m;i++)	
		{
			for (j=0;i<n;i++)
			{
				scanf("%d",&A[i][j]);
			}
		}
		for (i=0;i<m;i++)
		{
			trace=trace+A[i][i];
			for (j=0;j<n;j++)
			{
				sum=sum+A[i][j]*A[i][j];
			}
		}
		norm=sqrt((float)sum);
		printf("trace=%d\nnorm=%f\n",trace,norm);
	}
	else
	{
		printf("Cannot find trace\n");
	}
}