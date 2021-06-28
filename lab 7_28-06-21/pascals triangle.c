#include<stdio.h>
void main()
{
    int i,j,k,a[20][20]={0};
    a[0][0]=a[1][0]=a[1][1]=1;
    for(i=2;i<5;i++)
    {
        a[i][0]=1;
        for(j=1;j<5;j++)
        {
            a[i][j]=a[i-1][j-1]+a[i-1][j];
        }
    }
    printf("pascal's triangle is \n");
    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
}
