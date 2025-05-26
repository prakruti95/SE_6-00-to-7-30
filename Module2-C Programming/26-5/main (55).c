#include<stdio.h>
#include<conio.h>
void main()
{
    FILE *f1;
    char c;
    
    // printf("Data input output");
    // f1=fopen("Input","w"); 
    
    // while((c=getchar())!='0') 
    // {	
    //     putc(c,f1);  
    // }   
    // fclose(f1);  
    
    printf("\nData output\n");
    f1=fopen("Input","r");                           
    while((c=getc(f1))!=EOF)
    {	
        printf("%c",c);
    }
    fclose(f1);
    
    getch();
}