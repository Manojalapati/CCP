#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],i,j,r,c;
    printf("enter number of rows\n");
    scanf("%d",&r);
    printf("enter no of columns\n");
    scanf("%d",&c);
    printf("enter the first matrix elements\n");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            b[i][j]=a[j][i];
        }
    }
    printf("transposed matrix is\n");
    for(i=0;i<r;i++)
    {
        printf("\n");
        for(j=0;j<c;j++)
        {
            printf("%d\t",b[i][j]);
        }
    }
}
