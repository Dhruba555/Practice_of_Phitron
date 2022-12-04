#include<stdio.h>
int fact(int n)
{
    int i,fact=1;
    for(i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int main()
{
    int n,r,perm,comb;
    scanf("%d %d",&n,&r);
    perm = fact(n)/fact(n-r);
    printf("nPr : %d\n",perm);
    comb = fact(n)/(fact(n-r)*fact(r));
    printf("nCr : %d\n",comb);
    return 0;
}
