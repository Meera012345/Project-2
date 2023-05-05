#include<stdio.h>
#include<conio.h>
main()
{
	char ch;
	clrscr();
	printf("Press S for Sunday");
	printf("\nPress M for Monday");
	printf("\nPress T for Tuesday");
	printf("\nPress W for Wednesday");
	printf("\nPress t for Thursday");
	printf("\nPress F for Friday");
	printf("\nPress s for Saturday");
	printf("\nEnter Your choice:-");
	scanf("%c",&ch);
	switch(ch)
	{
		case 'S':
		      printf("Sunday",'S');
		      break;
		case 'M':
		      printf("Monday",'M');
		      break;
		case 'T':
		      printf("Tuesday",'T');
		      break;
		case 'W':
		      printf("Wednesday",'W');
		      break;
		case 't':
		      printf("Thursday",'t');
		      break;
		case 'F':
		      printf("Friday",'F');
		      break;
		case 's':
		      printf("Saturday",'s');
		      break;
	}
	getch();
}