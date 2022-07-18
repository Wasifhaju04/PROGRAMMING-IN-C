//write a c program to display the contents of a file.

#include <stdio.h>
#include <conio.h>
#include<string.h>
#include <process.h>
int main()
{
 FILE *fs;
 char ch;
 char *fname;
 printf("Enter the file name :");
 gets(fname);
 fs = fopen(fname,"r");
 if(fs==NULL)
 {
 puts("Source file cannot be opened.");
 getch();
 }
 else
 {
 while((ch=fgetc(fs))!=EOF)
 {
 putchar(ch);
 }
 }
 getch();
 return 0;
} 