#include<stdio.h>

int even(int x);
int main()
{
    int n;
    scanf("%d",&n);
    even(n);
}
int even(int x)
{
    int i;
    for(i=2;i<=x;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}
