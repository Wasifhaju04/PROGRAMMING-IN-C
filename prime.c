//Write a C program to generate all prime numbers between 1 and n. Where n is the value supplied by the user.

#include<stdio.h>
#include<conio.h>
void main()
{
 int n,i,fact,j;
 clrscr();
 printf("enter the number:");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 { fact=0;
 //THIS LOOP WILL CHECK A NO TO BE PRIME NO. OR NOT.
 for(j=1;j<=i;j++)
 {
 if(i%j==0)
 fact++;
 }
 if(fact==2)
 printf("\n %d",i);
 }
getch( );
}