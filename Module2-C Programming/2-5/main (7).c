#include<stdio.h>
#include<conio.h>

void main()
{
    
    int maths,sc,social,en,guj;
    
    printf("Enter Your Marks for Maths");
    scanf("%d",&maths);
    
    printf("Enter Your Marks for Science");
    scanf("%d",&sc);
    
    printf("Enter Your Marks for Social Science");
    scanf("%d",&social);
    
    printf("Enter Your Marks for English");
    scanf("%d",&en);
    
    printf("Enter Your Marks for Gujarati");
    scanf("%d",&guj);
    
    if(maths>=35 || sc>=35 || social>=35 || en>=35 || guj>=35)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    
  
    

    getch();
}
