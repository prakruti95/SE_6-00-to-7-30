#include <stdio.h>
#include <conio.h>

void main()
{
	int num;
	clrscr();
	printf("Enter any Number : ");
	scanf("%d",&num);

	printf("Square of Enter Number is %d",num*num);
	printf("\nCube of Enter Number is %d",num*num*num);
	getch();
}