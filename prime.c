#include<stdio.h>
int main()
{
    int n,i,j,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        for(j=2;j<=(arr[i]/2);j++)
        {
            if(arr[i]%j==0)
            {
                count=1;

            }
        }
        if(count==0)
        {
            printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }
}
