#include<stdio.h>
#include<conio.h>
void main()
{
int i, arr[5];
printf("Enter the elements into the array:");
for(i=0; i<=4;i++)
scanf("%d",&arr[i]);
printf("The elements of the array are:");
for(i=0; i<=4;i++)
printf("%d \t", arr[i]);
getch();
}