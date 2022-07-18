//Write a C program that uses functions to perform Multiplication of Two Matrices.

#include<stdio.h >
#include<conio.h>
int i,j,k;
void main()
{
 int a[10][10],b[10][10],c[10][10],m,n,p,q;
 void mul(int x[10][10],int y[10][10],int z[10][10],int m,int n,int p,int q);
 void read(int x[10][10],int m,int n);
 void display(int x[10][10], int m,int n);
 clrscr();
 printf("Enter the size of A Mtrix (Row and Col): \n");
 scanf("%d%d",&m,&n);
 printf("Enter the size of B Mtrix (Row and Col): \n");
 scanf("%d%d",&p,&q);
 if(n!=p)
 {
 printf("Multiplication Not Possible\n Please re-enter\n");
 printf("correct size and try again .....\n");
 }
 else
 {
 read(a,m,n);
 read(b,m,n);
 mul(a,b,c,m,n,p,q);
 printf("A Matrix is :\n");
 display(a,m,n); 
printf("B Matrix is :\n");

 display(b,m,n);
 printf("C Matrix is :\n");
 display(c,m,n);
 }
 getch();
}
 void mul(int x[10][10],int y[10][10],int z[10][10],int m,int n,int p,int q)
 {
 for (i=0;i<m;i++)
 for(j=0;j<q;j++)
 {
 z[i][j]=0;
 for(k=0;k<n;k++)
 z[i][j]+= x[i][k]*y[k][j];
 }

 }

 void read(int x[10][10], int m,int n)
 {
 printf("Enter Matrix Value Row by Row\n");
 for (i=0;i<m;i++)
 for(j=0;j<n;j++)
 scanf("%d",&x[i][j]);

 }

 void display(int x[10][10], int m,int n)
 {
 for (i=0;i<m;i++)
 {
 for(j=0;j<n;j++)
 printf("%5d",x[i][j]);
 printf("\n");
 }
 printf("\n");

 }  