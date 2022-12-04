#include<stdio.h>
int main()
{
    int i,n,k;
    scanf("%d %d",&n,&k);
    for(i=1;i<=k;i++)
    {
        if((n%10)==0)
        {
            n/=10;
        }
        else
        {
            n--;
        }
    }
    printf("%d\n",n);
}
