#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	switch(a<b&&a<c)
	{
		case 1:printf("a is minimum");break;
		case 0:switch(b<c)
		{
			case 1:printf("b is minimum");break;
			case 0:printf("c is minimum");break;
		}
	break;
	}
}


