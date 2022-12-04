#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    while(a!=0)
    {
        printf("%d, ",a);
        if(a%2==0)
        {
            a/=2;
        }
        else
        {
            a--;
        }
    }
}
