#include<stdio.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[0]==arr[i])
            flag++;
    }
    if(flag==n)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
}
