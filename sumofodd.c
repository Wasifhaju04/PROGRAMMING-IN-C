//Write a program to calculate sum of all the odd numbers between 1 to 20.

#include<stdio.h>
#include<conio.h>
void main()
{
inti,sum=0;
clrscr();
for(i=1;i<=20;i++)
{
if(i%2!=0)
{
sum=sum+i;
}
}
printf("Sum=%d",sum);
getch();
}
