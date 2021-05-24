#include<stdio.h>
float sq(float a);
void main()
{
    float a,square;
    printf("enter the number to be squared");
    scanf("%f",&a);
    sq(a);
}
float sq(float a)
{
  float square;
  square=a*a;
  printf("the sqyare is %f",square);
  return(0);
}
