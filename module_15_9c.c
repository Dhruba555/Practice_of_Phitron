#include<stdio.h>
int main()
{
    int i,n,temp;
    int arr[] = {12, 7, 9, 1, 3, 73, 11, 15, 62, 19, 4};

    for(int j=0;j<5-1;j++)
    {
        for(i=0;i<11-i-1;i++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        printf("%d ",arr[i]);
    }

    printf("\nSorted array: ");
    for(i=0;i<11;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

}

