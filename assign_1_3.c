#include <stdio.h>

int main()
{
    int a,sum=0;
    scanf("%d",&a);
    while(a!=0)
    {
        a=a/10;
        sum++;
    }
    printf("%d digits",sum);

    return 0;
}
