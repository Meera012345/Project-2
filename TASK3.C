#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	clrscr();
	printf("Enter the value of A:-");
	scanf("%d",&a);
	printf("Enter the value of B:-");
	scanf("%d",&b);
	printf("Enter the value of C:-");
	scanf("%d",&c);
	printf("Enter the value of D:-");
	scanf("%d",&d);

	if(a>b&&a>c&&a>d)
	{
		printf("Maximum is =%d.",a);
	}
	else if(b>c&&b>d)
	{
		printf("Maximum is=%d",b);
	}
	else if(c>d)
	{
		printf("Maximum value is =%d",c);
	}
	else
	{
		printf("Maximum value is =%d",d);
	}
	getch();
}
