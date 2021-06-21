#include<stdio.h>
void main()
{
    int i,n,num,a[10],loc;
    printf("enter the number of elements in the array\n");
    scanf("%d",&n);
    printf("enter the elements of the array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number to be inserted\n");
    scanf("%d",&num);
    printf("enter at which location\n");
    scanf("%d",&loc);
    for(i=n-1;i>=loc;i--)
    {
        a[i+1]=a[i];
        a[loc]=num;
    }
    printf("array after insertion is\n");
    for(i=0;i<n+1;i++)
    {
        printf("\t%d",a[i]);
    }

}
