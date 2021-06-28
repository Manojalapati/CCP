#include<stdio.h>
void main()
{
    int a[10][10],i,j,hmarks;
    for(i=0;i<4;i++)
    {
        printf("enter student %d marks\n",i);
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(j=0;j<3;j++)
    {
        hmarks=a[0][j];
        for(i=1;i<4;i++)
        {
            if(a[i][j]>hmarks)
            {
                hmarks=a[i][j];
            }
        }
        printf("highest marks in subject %d is %d\n",j,hmarks);
    }
}
