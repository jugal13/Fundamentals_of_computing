#include <stdio.h>
void main()
{
	int ch;
	float l,w,b,h,a,r,area,flag=1;
	printf("enter the polygon 1. triangle 2. square 3. circle 4. rectangle\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("enter base and height of the triangle\n");
				scanf("%f%f",&b,&h);
				area=0.5*b*h;
				break;
		case 2: printf("enter the side of square\n");
				scanf("%f",&a);
				area=a*a;
				break;
		case 3: printf("enter the radius of the circle\n");
				scanf("%f",&r);
				area=3.1415*r*r;
				break;
		case 4: printf("enter the length and breadth\n");
				scanf("%f%f",&l,&w);
				area=l*w;
				break;
		default: printf("invalid choice\n");
				 flag=0;
	}
	if(flag)
	{
		printf("area of the selected polygon=%f\n",area);
	}
}