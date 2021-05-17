#include<stdio.h>
#include<conio.h>
void main()
{
 float fah,cel;
 clrscr();
 printf("enter the temp in fahrenheit");
 scanf("%f",&fah);
 cel=0.56*(fah-32);
 printf("/n the temp in celsius is : %f",cel);
 getch();
 }