//Write a C program to evaluate algebraic expression (ax+b)/(ax-b)

#include<stdio.h>
#include<conio.h>
int main( )
{
int a,b,x;
float s;
clrscr();
printf(“enter the values of a,b,x”);
scanf(“%d %d %d”,&a,&b,&x);
s=(a*x+b)/(a*x-b);
printf(“The value of s=%f”,s);
getch();
} 