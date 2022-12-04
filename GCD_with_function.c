#include<stdio.h>

int gcd(int a, int b)
{
    int ans;
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
    return ans;
}

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);

    printf("%d",gcd(x,y));

    return 0;
}
