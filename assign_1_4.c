#include<stdio.h>
int main()
{
    long long int a;
    int b,sum=0;
    scanf("%lld",&a);

    while(a!=0)
    {
        b=a%10;
        sum+=b;
        a/=10;
    }
    printf("%d",sum);
}
