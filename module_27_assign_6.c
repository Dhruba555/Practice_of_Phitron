#include<stdio.h>

int div_three(int arr[],int n)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%3==0)
        {
            count++;
        }
    }
    //printf("Divide by  3:%d\n",count);
    return count;
}
int div_five(int arr[],int n)
{
    int i,count=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]%5==0)
        {
            count++;
        }
    }
    //printf("Divide by  5:%d\n",count);
    return count;
}

int main()
{
    int arr[100],n,total,count=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if((arr[i]%3==0) && (arr[i]%5==0))
        {
            count++;
        }
    }
    total= (div_three(arr,n)+div_five(arr,n))-count;
    if(total!=0)
    {
        printf("%d\n",total);
    }
    else
    {
        printf("-1\n");
    }

}
