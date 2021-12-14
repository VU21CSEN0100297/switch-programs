#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	int r1,r2,r3,d;
	scanf("%d%d%d",&a,&b,&c);
	d=(b*b)-4*a*c;
	switch(d>0)
	{
		case 1:printf("two distinct and real roots exists");break;
		case 0:switch(d<0)
		{
			case 1:printf("two distinct complex roots exists");break;
			case 0:printf("two equal roots exists");break;
		}
	break;
	}
	r1=(-b+sqrt(d))/(2*a);
	r2=(-b-sqrt(d))/(2*a);
	printf("%d%d",r1,\nr2);
}
