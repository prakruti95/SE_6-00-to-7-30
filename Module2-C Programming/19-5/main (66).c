#include<stdio.h>
#include<conio.h>

int main()
{
    char ch[100];
    char ch2[100];
    
    printf("Enter Value1: ");
    scanf("%s",&ch);
   
    
    printf("Your Value 2 is %s",strcpy(ch2,ch));
   
    
    
    return 0;
}