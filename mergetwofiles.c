//Write a C program to merge two files into a third file (i.e., the contents of the first file followed by those of the second are put in the third. 

#include<stdio.h>
#include<conio.h>
int main()
{
FILE *fp1,*fp2,*fp3;
char file1[20],file2[20],file3[20],ch;
puts("Program to merge two files....\n");
puts("Enter first file name:");
gets(file1);
puts("Enter Second file name:");
gets(file2);
puts("Enter Destination file name:");
gets(file3);
fp1=fopen(file1,"r");
fp2=fopen(file2,"r");
fp3=fopen(file3,"w");
if(fp1==NULL&&fp2==NULL)
printf("Error opening file1 and file2.....\n");
else
{
if(fp3==NULL)
printf("Error in creating destination file....\n");
else
{
while((ch=fgetc(fp1))!=EOF)
putc(ch,fp3);
while((ch=fgetc(fp2))!=EOF)
putc(ch,fp3);
}
printf("File Merging Sucessfull....");
fcloseall();
getch();
}
} 