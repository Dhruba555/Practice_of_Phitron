#include<stdio.h>
int main()
{
    int i,j,ans,x,y;
    int arr[5][5];
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }
    int rd,cd;
    if(x>2)
    {
        rd=x-2;
    }
    else{
        rd=2-x;
    }
    if(y>2)
    {
        cd=y-2;
    }
    else{
        cd=2-y;
    }
    ans=rd+cd;
    printf("%d\n",ans);
}
