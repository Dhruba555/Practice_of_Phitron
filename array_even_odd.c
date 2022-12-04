#include<stdio.h>
int main()
{
    int i,j,n,k;
    int arr[100];
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {

            printf("%d ",i);
        }
        arr[j]=i;
    }
    printf("%d ",arr[i]);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {

            printf("%d ",i);
        }
        arr[j]=i;
    }
    for(j=1;j<=n;j++)
    {
        printf("%d ",arr[j]);
    }

}
