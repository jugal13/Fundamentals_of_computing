#include <stdio.h>
void main()
{
	int A[10][10],B[10][10],C[10][10],m,n,p,q,i,j,k;
	printf("enter order of first matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter order of second matrix\n");
	scanf("%d%d",&p,&q);
	if(n==p)
	{
		printf("enter first matrix\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				scanf("%d",&A[i][j]);
			}
		}
		printf("enter second matrix\n");
		for(i=0;i<p;i++)
		{
			for(j=0;j<q;j++)
			{
				scanf("%d",&B[i][j]);
			}
		}
		for(i=0;i<m;i++)
		{
			for (j=0;j<q;j++)
			{
				C[i][j]=0;
				for(k=0;k<n;k++)
				{
					C[i][j]=C[i][j]+A[i][k]*B[k][j];
				}
			}
		}
		printf("product is\n");
		for(i=0;i<m;i++)
		{
			for(j=0;j<q;j++)
			{
				printf("%d\t",C[i][j]);
			}
			printf("\n");
		}
	}
	else
	{
		printf("matrices arent compatible\n");
	}
}