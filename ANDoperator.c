//Implement a program to demonstrate logical AND operator.

#include<stdio.h>
#include<conio.h>
void main()
{
int i;
int j;
clrscr();
printf("Enter the values of i and j");
scanf("%d%d",&i,&j);
if(i==5 && j==5) {
printf("Both i and j are equal to 5");
} else {
printf("Both the values are different and either or both are not
equal to 5");
}
getch();
}