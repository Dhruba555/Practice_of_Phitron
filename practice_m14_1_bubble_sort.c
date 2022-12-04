#include<stdio.h>
int main()
{
    int i,n,temp;
    printf("Enter array size: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n-1;j++)
    {
        for(i=0;i<n-i-1;i++)  // ekane i use korar karon hocce jokon 1 ta outer loop colbe tokon last digit largst takbe. tai oi digit e ar jawer proyojon nei.
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }

    printf("Sorted array: ");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

}
