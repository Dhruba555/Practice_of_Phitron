#include<stdio.h>
int main()
{
    int i;
    long long int r,n,n1,n2;
    scanf("%d",&n);
    r=n-2;
    n2=n;
    for(i=n-1;i>=1;i--)
    {
        n2*=i;
    }
    printf("%d\n",n);

    for(i=r-1;i>=1;i--)
    {
        r*=i;
    }
    printf("%d\n",r);
    n1=n/(2*r);
    printf("%d\n",n1);
}
