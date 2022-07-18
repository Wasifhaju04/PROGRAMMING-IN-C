//Write a program to swap two numbers using call be value.

#include<stdio.h>
#include<conio.h>
void swap(int a, int b) {
int temp;
temp=a;
a=b;
b=temp;
printf("Numbers after swapping no1=%d and no2=%d",a,b);
}
void main() {
int no1, no2;
clrscr();
printf("Enter the 2 numbers");
scanf("%d%d",&no1,&no2);
printf("Numbers before swapping no1=%d and no2= %d",no1, no2);
swap(no1,no2);
getch();
}