#include<stdio.h>
#include<conio.h>
int main()
{
    int marks[5];//fixed array size

    marks[0]=10;
    marks[1]=20;
    marks[2]=30;
    marks[3]=40;
    marks[4]=50;
   
   

    for(int i=0;i<=5;i++)
    {
        printf("marks[%d] = %d\n",i,marks[i]);
    }
    


    return 0;
}