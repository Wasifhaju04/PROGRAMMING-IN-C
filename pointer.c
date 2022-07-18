#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,c;
int*ptra=&a,*ptrb=&b,*ptrc=&c;
printf("enter three values");
scanf("%d%d%d",ptra,ptrb,ptrc);
printf("a=%d\n b=%d\n c=%d\n",*ptra,*ptrb,*ptrc);
if((*ptra>*ptrb && *ptra>*ptrc))
printf("biggest number=%d",*ptra);
else if((*ptrb>*ptra && *ptrb>*ptrc))
printf("biggest number =%d",*ptrb);
else
printf("biggest number=%d",*ptrc);
getch();
return 0;
}