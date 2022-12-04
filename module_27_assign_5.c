#include<stdio.h>

int sum(int arr[],int n)
{
    int ev=0,od=0,total;
    for(int i=1;i<=n;i++)
    {
        if((i%2)==0 && (arr[i]%2)==0)
        {
            ev+= (i+arr[i]);
        }
        if((i%2)!=0 && (arr[i]%2)!=0)
        {
            od+= (i+arr[i]);
        }
    }
    total=ev+od;
    return total;
}
int main()
{
    int arr[10],n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("%d\n",sum(arr,n));
}
