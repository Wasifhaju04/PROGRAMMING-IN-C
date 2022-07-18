//Write a program to declare structure employee having data member name, age, street and city. Accept data for two employees and display it.

#include<stdio.h>
#include<conio.h>
struct employee
{
char name[10],street[10],city[10];
int age;
};
void main()
{
int i;
struct employee e[2];
clrscr();
for(i=0;i<2;i++)
{
printf("\n Enter name:");
scanf("%s",&e[i].name);
printf("\n Enter age:");
scanf("%d",&e[i].age);
printf("\n Enter street:");
scanf("%s",&e[i].street);
printf("\n Enter city:");
scanf("%s",&e[i].city);
}
for(i=0;i<2;i++)
{
printf("\n Name=%s",e[i].name);
printf("\n Age=%d",e[i].age);
printf("\n Street=%s",e[i].street);
printf("\n City=%s",e[i].city);
}
getch();
}
