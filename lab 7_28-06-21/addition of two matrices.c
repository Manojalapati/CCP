#include<stdio.h>
void main()
{
    int a[10][10],b[10][10],c[10][10],i,j,r1,r2,c1,c2;
    printf("enter the number of rows in 1st matrix\n");
    scanf("%d",&r1);
    printf("enter no of columns in 1st matrix\n");
    scanf("%d",&c1);
    printf("no of rows in  2nd matrix\n");
    scanf("%d",&r2);
    printf("no of columns in 2nd matrix\n");
    scanf("%d",&c2);
    if(r1!=r2 || c1!=c2)
    {
        printf("invalid addition");
        exit(0);
    }
    else
    {
    printf("enter first matrix elements\n");
    for(i=0;i<r1;i++)
    {
        printf("\n");
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter second matrix elements\n");
    for(i=0;i<r2;i++)
    {
        printf("\n");
        for(j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    printf("final matrix is\n");
    for(i=0;i<r1;i++)
    {
        printf("\n");
        for(j=0;j<c1;j++)
        {
            printf("%d",c[i][j]);
            printf("\t");
        }
    }
    }

}
