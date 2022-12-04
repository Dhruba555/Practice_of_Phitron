#include<stdio.h>
int main()
{
    int n,i,ec=0,oc=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }
    printf("Total even numbers in array: %d\nTotal odd numbers in array: %d\n",ec,oc);

}
