#include<stdio.h>
void sum(int);
void main()
{
    int n,final;
    printf("till where?\n");
    scanf("%d",&n);
    sum(n);
   // printf("%d^2+=%d",2*i+1,final);
}
void sum(int n)
{
    int i,s=0;
    for(i=0;i<=n-1;i++)
    {
        s=s+(2*i+1)*(2*i+1);
        printf("%d^2+",2*i+1);
    }
    printf("=%d",s);
}
