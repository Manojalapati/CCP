#include<stdio.h>
#include<math.h>
float func(int a,int b,int c);
void main()
{
    float a,b,c,d,r1,r2;
    printf("enter the coefficients");
    scanf("%f %f %f",&a,&b,&c);
    func(a,b,c);
}
float func(int a,int b,int c)
{
    float d,r1,r2,realp,imgp;
    d=b*b-4*a*c;
    if(d>0)
    {
        r1=(-b+sqrt(d))/2*a;
        r2=(-b-sqrt(d))/2*a;
        printf("the roots are %f and %f",r1,r2);
    }
   else if(d==0)
   {
        r1=r2=-b/(2*a);
        printf("the roots are %f and %f",r1,r2);
   }
    else
    {
        realp=-b/(2*a);
        imgp=sqrt(-d)/(2*a);
        printf("the imaginary roots are %f+i%f and %f-i%f",realp,imgp,realp,imgp);
    }
     return(0);

}
