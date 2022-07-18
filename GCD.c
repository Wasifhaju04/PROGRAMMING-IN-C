//Write a C program to find the GCD of two given integers by using the recursive function

#include<stdio.h>
#include<conio.h>
int gcdrecursive(int m,int n)
{
if(n>m)
return gcdrecursive(n,m);
if(n==0)
return m;
 else
return gcdrecursive(n,m%n); // return to the main program
}
void main()
{
int a,b,igcd; clrscr();
printf("enter the two numbers whose gcd is to be found:");
scanf("%d%d",&a,&b);
printf("GCD of a,b is %d",gcdrecursive(a,b)); // return to the sub program getch();
}