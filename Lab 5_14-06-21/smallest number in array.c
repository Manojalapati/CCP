#include<stdio.h>
void main()
{
    int a[10],n,i,p=0,small;
    printf("enter the num of elements\n");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    small=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            p=i;
        }
    }
    printf("the smallest element is=%d\n",small);
    printf("position of the element is=%d\n",p);
}

