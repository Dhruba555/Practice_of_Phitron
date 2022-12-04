#include<stdio.h>
/*
    int a[50],i,j=0;
    for(i=0,j=0;i<9;i+=2,j++) a[j]=i;
    for(i=1;i<=9;i+=2,j++) a[j]=i;
    for(i=0;i<j;i++) printf("%d ",a[i]);
    printf("\n");


    for(i=2,j=0;i<=n;i+=2,j++)
    {
        a[j]=i;
    }
    for(i=1;i<=n;i+=2,j++)
    {
        a[j]=i;
    }
    for(i=1;i<=j;i++)
    {
        printf("%d ",a[i]);
    }
*/

int main()
{
    int a[100],i,j=0,n,k;
    scanf("%d %d",&n,&k);
    for(i=2,j=0;i<n;i+=2,j++) a[j]=i;
    for(i=1;i<=n;i+=2,j++) a[j]=i;
    for(i=0;i<j;i++) printf("%d ",a[i]);
    printf("\n");
    printf("The %dth element is this sequence is %d.\n",k,a[k-1]);
    return 0;
}
