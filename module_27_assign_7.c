#include<stdio.h>
int swap(int* x,int* y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y=temp;
    return (x,y);
}
int main()
{
    int n,arr[100],q,l,r;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%d %d",&l,&r);
        swap(&arr[l-1],&arr[r-1]);
    }
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
