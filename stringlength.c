//Write a program to accept a string as input from user and determine its length. [Don’t use built in library function strlen()]

#include<stdio.h>
#include<conio.h>
void main(){
char str[50];
int i, len=0;
clrscr();
printf("Enter a string");
scanf("%s",&str);
for(i=0; str[i]!='\0'; i++){
len++;
}
printf("The length of string is %d",len);
getch();
}
