#include<stdio.h>
int main()
{
    int n,a,b,c;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a==b && b==c)
        {
            a=a+1;
            b=b+1;
            c=c+1;
            printf("%d %d %d\n",a,b,c);
        }
        else if(a>b && a>b)
        {
            b=(a-b)+1;
            c=(a-c)+1;
            a=0;
            printf("%d %d %d\n",a,b,c);
        }
        else if(b>c)
        {
            a=(b-a)+1;
            c=(b-c)+1;
            b=0;
            printf("%d %d %d\n",a,b,c);
        }
        else
        {
            a=(c-a)+1;
            b=(c-b)+1;
            c=0;
            printf("%d %d %d\n",a,b,c);
        }
    }
}
