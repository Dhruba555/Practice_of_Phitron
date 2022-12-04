#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d - ",arr[i]);
        for(j=1;j<=n;j++)
        {
            if(j==arr[i])
                continue;
            printf("%d ",j);
        }
        printf("\n");
    }
}

