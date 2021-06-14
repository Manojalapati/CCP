#include<stdio.h>
void main()
{
    int a[100],i,n;
    printf("enter the number of elements in array\n");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the elemets are\n");
    for(i=0;i<n;i++)
    {
        printf("%dth element is=%d\n",i,a[i]);
    }

}
