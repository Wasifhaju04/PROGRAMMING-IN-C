//Write a C program which takes two integer operands and one operator from the user, performs the operation and then prints the result.(Consider the operators +,-,*,/,% and use Switch Statement.)

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,ch; clrscr();
printf("ENTER TWO VALUES FOR a & b\n"); scanf("%d %d",&a,&b);
while(1) {
printf("MENU OPTIONS \n");
printf("************\n");
printf("1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("5.Modulus\n");
printf(“6.Exit\n”);
printf("\n");
printf("ENTER UR CHOICE\n");
scanf("%d",&ch);
switch(ch) 
{ 
case 1: 
c=a+b;
printf("The addition of %d and %d is..%d\n",a,b,c); 
break;
case 2: 
c=a-b;
printf("The subtraction of %d and %d is..%d\n",a,b,c); 
break;
case 3: 
c=a*b;
printf("The multiplication of %d and %d is..%d\n",a,b,c); 
break;
case 4: 
c=a/b;
printf("The division of %d and %d is..%d\n",a,b,c); 
break;
case 5: 
c=a%b;
printf("The modulus of %d and %d is..%d\n",a,b,c); 
break;
case 6:
exit(0); 
default:
printf("INVALID CHOICE\n"); 
}
}
getch();
} 