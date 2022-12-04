#include<stdio.h>
int main()
{
    int n,i,j,count=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=2;j<arr[i];j++)
        {
            if(arr[i]%j==0)
            {
                count=1;

            }
        }
        if(count==0)
        {
            printf("%d\n",arr[i]);
        }
     }


    /*for(i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            count=1;
        }
    }
    if(count!=1)
    {
        printf("Prime");
    }
    else{
        printf("Not prime");
    }
    */
}
