#include <stdio.h>
#include <conio.h>

void main()
{
	int row,coloum,space,loop,num;
	clrscr();

	printf("Enter the Row for the Pyramid : ");
	scanf("%d",&row);

	for(loop=1;loop<=row;loop++)
	{
		for(space=0; space != (row-loop); space++)
			printf(" ");

		for (coloum=row; coloum > space; coloum--)
			printf("%d",coloum-space);

		printf("\n");
	}
	getch();
}
