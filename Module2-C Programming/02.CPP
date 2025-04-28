#include <stdio.h>
#include <conio.h>

void main()
{
	int a,b,add,num,sub,div,multi;
	clrscr();
	printf ("Enter the First Value : ");
	scanf ("%d",&a);
	printf ("Enter the Second Value : ");
	scanf ("%d", &b);

	//addition
	num = a + b;
	printf (" Addition = %d",num);

	//Subtraction
	sub= a-b;
	printf( "\n Subtraction = %d",sub);

	//Division
	div=a/b;
	printf("\n Division = %d",div);

	//Muliplication
	multi = a*b;
	printf("\n Multiplication = %d", multi);

	getch();
}