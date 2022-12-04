#include<stdio.h>
int main()
{
    int i, n=5,m,x;
    int arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    m=arr[0];
    x=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>m)
        {
            m=arr[i];
        }
        if(arr[i]<x)
        {
            x=arr[i];
        }
    }

    printf("Maximum: %d.\n",m);
    printf("Minimum: %d.\n",x);
}
