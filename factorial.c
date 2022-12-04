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
int ratio_func(int a,int b)
{
    int x,y,z;
    x=fact(a);
    y=fact(b);
    z=x/y;
    return z;
}
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    c = ratio_func(a,b);
    printf("Ratio : %d\n",c);
}



