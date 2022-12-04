#include<stdio.h>
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int arr[n+5][m+5];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    //printf("\n");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            if(arr[i][j]==i && arr[i][j]==j)
            {
                arr[i][j]+=3;
            }
            else if(arr[i][j]==i)
            {
                arr[i][j]+=2;
            }
            else if(arr[i][j]==j)
            {
                arr[i][j]+=1;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }


}
