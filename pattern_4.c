#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%dth row-> ",i);
        for(j=1;j<=n-i;j++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        for(j=1;j<=i-1;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

