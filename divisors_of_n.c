#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    divisor(n);
}
int divisor(int a)
{
    int i;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
