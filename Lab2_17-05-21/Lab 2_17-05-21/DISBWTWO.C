#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
 float x1,x2,y1,y2,dist;
 clrscr();
 printf("input the points");
 scanf("%f %f %f %f",&x1,&x2,&y1,&y2);
 dist=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
 printf("/n the distance is=%f",dist);
 getch();
 }