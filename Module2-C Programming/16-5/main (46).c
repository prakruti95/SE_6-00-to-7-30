#include<stdio.h>
#include<conio.h>
void main()
{
    int marks[5],summation=60;
    float avg=0;
  
    for(int i=0;i<5;i++)
    {
        printf("Enter your Marks");
        scanf("%d",&marks[i]);
    }
    for(int i=0;i<5;i++)
    {
        
        summation+=marks[i];
       
    }
     printf("Summation for all the Numbers are : %d",summation);
    
    avg=summation/5;
    
    printf("percentage is %f",avg);
     
    
    
    
    getch();
}