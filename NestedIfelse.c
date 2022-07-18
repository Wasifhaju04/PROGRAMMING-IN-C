//Nested if-else

#include<stdio.h>
#include<conio.h>
void main() {
int val;
clrscr();
printf("Enter a number");
scanf("%d",&val);
if(val>=5) {
if(val>5) {
printf("Number is greater than 5");
} else {
 printf("Number is equal to 5");
}
 } else {
printf("Number is less than 5");
}
getch();
}
