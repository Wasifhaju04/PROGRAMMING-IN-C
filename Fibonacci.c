//Fibonacci Sequence is defined as follows: the first and second
terms in the sequence are 0 and 1. Subsequent terms are found by
adding the preceding two terms in the sequence. Write a C program
to generate the first n terms of the sequence.

#include<stdio.h>
#include<conio.h>
void main()
{
int f0,f1,f,n,i;
clrscr();
printf("ENTER THE VALUE FOR n \n");
scanf("%d",&n);
f0=0;
f1=1;
printf("FIBONACCI SEQUENCE FOR THE FIRST %d TERMS:\n",n);
i=0;
while(i<n)
{
printf("%d\t",f0);
f=f0+f1;
f0=f1;
f1=f;
i=i+1;
}
} 