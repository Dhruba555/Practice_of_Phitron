#include<stdio.h>
int main()
{
    int i,j,n,min_ind,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[n]);
    }
    for(i=0;i<n;i++)
    {
        min_ind=i;
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
            {
                min_ind=j;
            }
        }
        temp=arr[i];
        arr[i]=arr[min_ind];
        arr[min_ind]=temp;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;

}
