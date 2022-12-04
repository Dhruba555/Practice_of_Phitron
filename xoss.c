#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(i==1)
            {
                printf("%d",j);
            }
            else if(j==1)
            {
                printf("%d",i);
            }
            else if(i==n ||j==n)
            {
                printf("%d",n);
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");
    }
}
