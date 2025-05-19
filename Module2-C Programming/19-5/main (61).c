#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    
    printf("Enter Any value");
    scanf("%c",&ch);
    
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    {
        printf("Vowels");
    }
    else
    {
        printf("Consonant");
    }
    
    return 0;
}