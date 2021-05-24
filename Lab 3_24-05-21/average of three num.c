#include<stdio.h>
float avg(float a,float b,float c);
void main()
{
    float a,b,c,average;
    printf("/n enter the three integers");
    scanf("%f %f %f",&a,&b,&c);
    avg(a,b,c);
    //printf("the average is %f",average);
}
float avg(float a,float b,float c)
{
    float average;
    average=(a+b+c)/3;
    printf("the average is %f",average);
    return(0);
}
