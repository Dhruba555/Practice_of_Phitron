#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    printf("%d\n",max);
}
