//Write a program to take input of name, rollno and marks obtained by a
student in 4 subjects of 100 marks each and display the name, rollno with
percentage score secured.

#include<stdio.h>
#include<conio.h>
void main()
{
char name[20];
int rollno;
float sub1, sub2, sub3, sub4, , sum, score;
printf("Enter name of student: ");
scanf(“%s”,&name[]);
printf ("\n Enter Roll Number: ");
scanf("%d", &rollno);
printf ("\n Enter Marks in 4 Subjects:\n");
scanf("%f%f%f%f", &sub1, &sub2, &sub3, &sub4);
sum=sub1+sub2+sub3+sub4;
score = (sum/500)*100;
printf("\n Name of student: %s", name[]);
printf("\n Roll Number: %d", rollno);
printf ("\nPercentage score secured: %2.2f%c", score,'%');
getch();
}
