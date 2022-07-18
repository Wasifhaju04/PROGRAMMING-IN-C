//Write a C program to perform addition of two matrices. 

#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],c[3][3];
int i,j;
clrscr();
printf("ENTER A MATRIX\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&a[i][j]);
}
printf("ENTER B MATRIX\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
scanf("%d",&b[i][j]);
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
c[i][j]=a[i][j]+b[i][j];
}
printf(" After addition of two matrices :\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("%d\t",c[i][j]);
 }
printf("\n");
}
getch();
} 