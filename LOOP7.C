//factorial
#include<stdio.h>
#include<conio.h>

void main()
{
 int n,i,fact=1;
 clrscr();

 printf("Enter Number ==>  ");
 scanf("%d",&n);

 for (i=n;i>=1;i--)
 {
  fact=fact*i;

 }
  printf("%d",fact);

 getch();


}