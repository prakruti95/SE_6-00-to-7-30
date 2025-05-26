#include<stdio.h>
#include<conio.h>
struct Address 
{
    char city[50];
    int zip;
    
};
struct Student 
{
    char name[50];  
    int age;
    struct Address addr; // Nested Structure
};
int main()
{
    struct Student s1 = {"John Doe", 20, {"New York", 10001}};
    printf("Name: %s\nAge: %d\nCity: %s\nZIP: %d\n",s1.name, s1.age, s1.addr.city, s1.addr.zip);
    return 0;
}