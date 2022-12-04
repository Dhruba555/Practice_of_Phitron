#include<stdio.h>
int main()
{
    int a,b,x,m,n,gcd;
    scanf("%d %d",&m,&n);
    if(m>n)
    {
        a=m;
        b=n;
        while(b!=0)
        {
            x=a%b;
            a=b;
            b=x;
        }
        gcd=a;
    }
    if(n>m)
    {
        a=n;
        b=m;
        while(a!=0)
        {
            x=b%a;
            b=a;
            a=x;
        }
        gcd=b;
    }

    printf("The GCD of %d and %d is %d.",m,n,gcd);
}
