#include<stdio.h>
int func(int a,int b,int c);
void main()
{
    int a,b,c;
    printf("enter the three numbers");
    scanf("%d %d %d",&a,&b,&c);
    func(a,b,c);
}
int func(int a,int b,int c)
{
    if(a<b && a<c)
    {
        printf("smallest num is %d",a);
    }
    else if(b<c)
    {
        printf("smallest num is %d",b);
    }
    else
    {
        printf("smallest num is %d",c);
    }
    return(0);
}
