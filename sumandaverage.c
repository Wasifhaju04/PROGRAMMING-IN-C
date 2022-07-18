// Write a C program to find the sum and average of three numbers.

#include<stdio.h>
 int main( )
 {
 int a,b,c;
 int sum,average;
 printf("Enter any three integers: ");
 scanf("%d%d %d",&a,&b,&c);
 sum = a+b+c;
 average=sum/3
 printf("Sum and average of three integers: %d %d",sum,average);
 return 0;
} 