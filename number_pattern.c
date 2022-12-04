#include<stdio.h>
int  main()
{
    int n,i;
    scanf("%d",&n);
    int k=n-1,j;
    for(i=1;i<=n;i++)
    {
        printf("%d",i);
    }
    printf("\n");
    for(i=2;i<n;i++)
    {
        printf("%d",i);
        for(j=2;j<n;j++)
        {
            printf(" ");
        }
        printf("%d",k);
        k--;
        printf("\n");
    }
    for(i=n;i>=1;i--)
    {
        printf("%d",i);
    }

}
