#include<stdio.h>
#include<conio.h>
void main()
{
 int num,tensplace;
 clrscr();
 printf("enter the number");
 scanf("%d",&num);
 tensplace=(num/10)%10;
 printf("the tensplace of the number is= %d",tensplace);
 getch();
 }
