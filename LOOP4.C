#include<stdio.h>
#include<conio.h>
void main()
{
   int n,i;
   clrscr();

   printf("Enter Any Number = ");
   scanf("%d",&n);
   i=1;

   do
   {
    printf("%d\t",i);
    i=i+1;

   } while (i<=n);


   getch();




}