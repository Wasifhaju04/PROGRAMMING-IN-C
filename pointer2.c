//Write a program to compute the sum of all elements stored in an array using pointers.

#include<stdio.h>
#include<conio.h>
void main()
{
int a[5],sum=0,i,*ptr;
clrscr();
printf("\n Enter array elements:");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
ptr=&a[0];
for(i=0;i<5;i++)
{
sum=sum+(*ptr);
ptr=ptr+1;
}
printf("\n Sum= %d",sum);
getch();
}