#include<stdio.h>
int main()
{
    int i,n,k;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=k+1;i<=n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=1;i<=k;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
