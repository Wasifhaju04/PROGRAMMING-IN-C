//Develop menu driven program to count digit of number and swap 2 number without 3rd variable. 

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,ch,d;
char s1[40],s2[40],c;
int i=0;
clrscr();
do{
printf("press 1 for swapping number\npress two for swapping
string\nselect your option:\n");
scanf("%d",&ch);
switch(ch)
{
case 1:
printf("enter the number:\n");
scanf("%d%d",&a,&b);
a=a+b;
b=a-b;
a=a-b;
printf("after swapping value is:%d\t%d",a,b);
break;
case 2:
printf("enter the string:\n");
scanf("%s%s",&s1,&s2);
while(s1[i]!='\0'||s2[i]!='\0')
{
s1[i]=s1[i]+s2[i];
s2[i]=s1[i]-s2[i];
s1[i]=s1[i]-s2[i];
i++;
}
printf("after swapping the value is %s\t%s",s1,s2);
break;
default:
printf("enter valid choice");
break;
}
printf("\ndo you want to continue(y/n):\n");
scanf("%d",&d);
scanf("%c",&c);
}while(c=='y');
getch();
}