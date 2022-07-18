//Write a program to accept the value of year as input from the keyboard & print whether it is a leap year or not.

#include<stdio.h>
#include<conio.h>
void main() {
int year;
clrscr();
printf("Enter year");
scanf("%d",&year);
if(year%4==0) {
printf("Year %d is a leap year",year);
} else {
printf("Year %d is not a leap year",year);
}
getch();
}
