#include<stdio.h>
int func(int n);
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    func(n);
}
int func(int n)
{
    int sum=0,rem;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }
    printf("sum of digits is=%d",sum);
    return 0;
}
