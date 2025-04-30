#include<stdio.h>
#include<conio.h>
void main()
{
	int pri=20000,years=3;
	float rate=7;
	clrscr();

       float ans = pri * rate * years;
       float ans2 = ans/100;
       float totalamount = pri+ans2;
       printf("\n Your Intrest is %f",ans2);
       printf("\n You have to Pay total amount is : %f",totalamount);


	getch();
}