#include<stdio.h>
int main()
{
    int n,q,i,v,j;
    scanf("%d",&n);
    int arr[n];
    for(j=0;j<n;j++)
    {
        scanf("%d",&arr[j]);
    }
    scanf("%d",&q);
    for(j=0;j<q;j++)
    {
        scanf("%d %d",&i,&v);
        arr[i]+=v;
    }
    for(j=0;j<n;j++)
    {
        printf("%d ",arr[j]);
    }
}
