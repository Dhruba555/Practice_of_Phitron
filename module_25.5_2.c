#include<stdio.h>
int bubble_sort(int arr[],int n)
{
    int i,temp;
    for(i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
/*int smallest(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {

    }
}*/
int main()
{
    int n,k;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&k);
    bubble_sort(arr,n);
    for(int i=0; i<n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n%dth largest element : %d",k,arr[n-k]);
    printf("\n%dth smallest element : %d",k,arr[k-1]);
    return 0;
}

