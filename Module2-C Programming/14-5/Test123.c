#include<stdio.h>
#include<conio.h>
int main()
{

    int x=50;
    int y=70;

    interchange(&x,&y);

    printf("x=%d y=%d",x,y); 

    return 0;
}
void interchange(int *a,int *b)
{   
        int z1; 

        z1=*a; 
        *a=*b; 
        *b=z1;
        
        //printf("Number 2: x=%d y=%d",a,b); 

}