#include<stdio.h>
int main()
{
    int i,n,a,e=0,o=0,ans;
    scanf("%d",&n);
    int arr[n];
    for(i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            e++;
        }
        else{
            o++;
        }
    }
    //printf("Even = %d & Odd = %d\n",e,o);
    if(e==1)
    {
        for(i=1;i<=n;i++);
        {
            if((arr[i]%2)==0)
            {
                ans=i;
            }
        }
    }
    else
    {
        for(i=1;i<=n;i++);
        {
            if((arr[i]%2)!=0)
            {
                ans=i;
            }
        }
    }
    printf("%d",ans);
}
