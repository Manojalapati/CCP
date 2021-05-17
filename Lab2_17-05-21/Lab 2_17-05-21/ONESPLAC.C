#include<stdio.h>
#include<conio.h>
void main()
{
 int num,onesplace;
 clrscr();
 printf("enter the number");
 scanf("%d",&num);
 onesplace=num%10;
 printf("/n the digit at ones place is :%d",onesplace);
 getch();
 }