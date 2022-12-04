#include<stdio.h>
int n_to_mn(int n);
int main()
{
    int n;
    scanf("%d",&n);
    n_to_mn(n);
    printf("\n");
}
int n_to_mn(int n)
{
    int i;
    if(n==0)
    {
        printf("0");
    }
    else if(n>0)
    {
        for(i=n;i>=-n;i--)
        {
            printf("%d ",i);
        }
    }
    else
    {
        for(i=n;i<=-n;i++)//-(-n) to -n
        {
            printf("%d ",i);
        }
    }
    return 0;
}
