#include<stdio.h>
void func(int,int);
void main()
{
    int m,n;
    printf("from where?");
    scanf("%d",&m);
    printf("till where?");
    scanf("%d",&n);
    func(m,n);
}
void func(int m,int n)
{
    int i;
    for(i=m;i<=n;i++)
    {
        if(i%2==0)
        printf("%d\n",i);
    }
}
