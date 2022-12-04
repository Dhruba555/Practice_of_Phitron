#include<stdio.h>
int main()
{
    int i,n,len,sum=0;
    scanf("%d",&n);

    for(i=0;n>0;i++)
    {
        sum+=n%10;
        n/=10;
    }
    printf("%d\n",sum);
}
