#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    int brr[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    for(i=1; i<=n; i++)
    {
        if(max<arr[i])
		    max=arr[i];
    }
    printf("%d\n",max);
    for(i=1; i<=n; i++)
    {
        brr[i]=max-arr[i];
        printf("%d ",brr[i]);
    }

}
