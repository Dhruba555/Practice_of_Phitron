#include<stdio.h>
int main()
{
    int a,b,ans;
    scanf("%d %d",&a,&b);

    if(a>b)
    {
        for(int i=b;i>=1;i--)
        {
            if(a%i==0 && b%i==0)
            {
                ans=i;
                break;
            }
        }
    }
    else
    {
        for(int i=a;i>=1;i--)
        {
            if(a%i==0 && b%i==0)
            {
                ans=i;
                break;
            }
        }
    }
    printf("%d\n",ans);

    return 0;
}
