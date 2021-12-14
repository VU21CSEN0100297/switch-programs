#include<stdio.h>
main()
{
	int a,b,x;
    char ch;
    printf("Enter any one operator +, -, *, /:");
    scanf("%c",&ch);
    printf ("Enter two numbers:\n");
    scanf ("%d%d",&a,&b);
    switch(ch)
   {
   	case '+':x=a+b;
	   printf("%d",x);break;
   	case '-':x=a-b;
	   printf("%d",x);break;
   	case '*':x=a*b;
	   printf("%d",x);break;
   	case '/':x=a/b;
	   printf("%d",x);break;
   }
}
