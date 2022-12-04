#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int x[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=n;i>=1;i--)
    {
        printf("%d ",x[i]);
    }
}
