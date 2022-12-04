#include<stdio.h>
int main()
{
    int i,j,n,t,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    for(i=n-1;i>=0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                t=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=t;
            }
        }
    }
/*    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
*/
    printf("\n%d",arr[k-1]);

}

