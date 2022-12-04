#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d",&n);
        int m=n/4;
        printf("%d %d %d %d\n",(m-3),(m-1),(m+1),(m+3));
    }

}
