#include<stdio.h>
int main()
{
    int i,j,n,max_1,max_2;
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max_1=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max_1)
        {
            max_1=arr[i];
        }
    }
    printf("First Largest Number: %d\n",max_1);

    max_2=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max_2 && arr[i]<max_1)
        {
            max_2=arr[i];
        }
    }
    printf("Second Largest Number: %d\n",max_2);


}
