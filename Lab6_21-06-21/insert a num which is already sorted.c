#include<stdio.h>
void main()
{
    int i,n,num,j,a[10];
    printf("enter the number of elements\n");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to be inserted\n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(a[i]>num)
        {
            for(j=n-1;j>=i;j--)
            {
                a[j+1]=a[j];
            }
            a[i]=num;
            break;
        }
    }
    printf("array after insertion is\n");
    for(i=0;i<=n;i++)
    {
        printf("%d\n",a[i]);
    }
}
