#include<stdio.h>
int t_count(int arr[],int n,int x)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]>x || arr[i]<x)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    printf("%d",t_count(arr,n,k));
    return 0;
}
