#include<stdio.h>

void sorted_list(int arr[],int size)
{
    int i,j,temp;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
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
float median(int arr[],int n)
{
    float m,x;
    if(n%2!=0)
    {
        x = arr[n/2];
    }
    else
    {
        m = (arr[(n/2)-1]+arr[n/2]);
        x = m/2;
    }
    return x;
}
int main()
{
    int n,i;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter the elements of array: ");
    int arr[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Sorted array: ");
    sorted_list(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    printf("Median is : %.2f\n",median(arr,n));
}

