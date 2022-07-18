//To delete n Characters from a given position in a given string. 

#include<stdio.h>
 #include<string.h>
 main()
 {
 char a[30],c[30];
 int pos=0,i=0,L,La,j,n;
 puts("Enter a string");
 gets(a);
 puts("enter position for deletion");
 scanf("%d",&pos);
 puts("Enter number of characters to be deleted");
 scanf("%d",&n);
 La=strlen(a);
 L=pos+n;
 for(i=0;i<pos;i++)
 {
 c[i]=a[i];
 }
 j=pos;
 for(i=L;i<=La;i++)
 {
 c[j]=a[i];
 j++;
 }
 puts("String after Deletion is:");
 printf("%s",c);
 } 