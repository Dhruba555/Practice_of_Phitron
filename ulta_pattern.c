#include<stdio.h>
void pattern(int n);
int main()
{
    int n;
    scanf("%d",&n);
    pattern(n);

}
void pattern(int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=(2*n-(i*2-1));j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
