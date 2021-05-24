#include<stdio.h>
int func(int n);
void main()
{
    int n;
    printf("enter till which natural num");
    scanf("%d",&n);
    func(n);
}
int func(int n)
{
    int sum=0,i;
    for(i=1;i<n+1;i++)
    {
      sum=sum+i;
    }
      printf("the sum is %d",sum);
}
