#include <stdio.h>
#include <math.h>
void main()
{
	float a,b,c,d,rp,ip;
	printf("enter non zero coefficients\n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	rp=-b/(2*a);
	ip=sqrt(fabs(d))/(2*a);
	if (d==0)
	{
		printf("roots are real and equal\n");
		printf("r1=%f \nr2=%f \n",rp,rp);
	}
	else if (d>0)
	{
		printf("roots are real and distinct\n");
		printf("r1=%f \nr2=%f \n",rp+ip,rp-ip);
	}
	else
	{
		printf("roots are imaginary\n");
		printf("r1=%f+i%f \nr2=%f-i%f \n",rp,ip,rp,ip);
	}
}