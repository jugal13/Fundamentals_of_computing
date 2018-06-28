#include <stdio.h>
void main()
{
	int a,b;
	char op;
	printf("enter the numbers\n");
	scanf("%d%d",&a,&b);
	printf("enter the operator\n");
	scanf("%c",&op);
	switch(op)
	{
		case '+': printf("sum=%d\n",a+b);
				  break;
		case '-': printf("difference=%d\n",a-b);
				  break;
		case '*': printf("product=%d\n",a*b);
				  break;
		case '/': if (b==0)
				  {
					printf("Divide by zero error\n");
				  }
				  else
				  {
					printf("quotient=%d\n",a/b);
				  }
				  break;
		case '%': printf("remainder=%d\n",a%b);
				  break;
		default:  printf("invalid operation\n");
	}
}