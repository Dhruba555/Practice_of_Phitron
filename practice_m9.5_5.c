#include<stdio.h>
int main()
{
    int i,j,n,t,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(arr[i]+arr[j]==t)
            {
                flag=1;

            }
        }
    }
    if(flag==1)
    {
        printf("YES\n");

    }
    else
    {
        printf("NO\n");
    }
}
