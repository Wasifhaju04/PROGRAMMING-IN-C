//Write a C program using user defined functions to determine whether the
given string is palindrome or not.

#include <stdio.h>
#include <string.h>
 void main()
{
 char string[25], reverse_string[25] = {'\0'};
 int i, length = 0, flag = 0;

 printf("Enter a string \n");
 gets(string);
 for (i = 0; string[i] != '\0'; i++)
 {
 length++;
 }
 printf("The length of the string '%s' = %d\n", string, length);
 for (i = length - 1; i >= 0 ; i--)
 {
 reverse_string[length - i - 1] = string[i];
 }
 for (flag = 1, i = 0; i < length ; i++)
 {
 if (reverse_string[i] != string[i])
 flag = 0;
 }
 if (flag == 1)
 printf ("%s is a palindrome \n", string);
 else
 printf("%s is not a palindrome \n", string);
} 