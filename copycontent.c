//Write a C program to copy the contents of one file to another

#include<stdio.h>
#include<process.h>
#include<conio.h>
void main()
{
FILE *ft,*fs;
int c=0;
clrscr();
fs=fopen("a.txt","r");
ft=fopen("b.txt","w");
if(fs==NULL)
{
printf("Source file opening error\n");
exit(1);
}
else
if(ft==NULL)
{
printf("Target file opening error\n");
exit(1);
}
while(!feof(fs))
{
fputc(fgetc(fs),ft);
c++;
}
printf("%d bytes copied from 'a.txt' to 'b.txt'",c);
c=fcloseall();
printf("%d files closed",c);
} 