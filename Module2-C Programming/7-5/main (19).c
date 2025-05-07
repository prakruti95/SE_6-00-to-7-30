/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num,max=0,rem;
    
    printf("Enter Any Number");
    scanf("%d",&num);//1562
    
    

    
    while(num>0)
    {
       rem = num % 10;
       
        //sum+=n;
        if (rem > max)
    	{
    		max=rem;
    	}
       
         num=num/10;
    }
   printf("Max digit is : %d ",max);
    

    return 0;
}
