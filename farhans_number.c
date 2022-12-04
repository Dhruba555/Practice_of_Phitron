#include<stdio.h>

int seven_present(int n);
int dg_sum(int n);
int l_d_prime(int n);

int main()
{
    int n;
    scanf("%d",&n);

    if(seven_present(n)==1 && dg_sum(n)>10 && l_d_prime(n)==1)
    {
        printf("Farhan's Number.\n");
    }
    else
    {
        printf("Not Farhan's Number.\n");
    }

}
int seven_present(int n)
{
    while(n>0)
    {
        if(n%10 ==7)
            return 1;

        n/=10;
    }
    return 0;
}
int dg_sum(int n)
{
    int sum=0;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    return sum;
}
int l_d_prime(int n)
{
    int ld=n%10;
    if(ld==2 || ld==3 || ld==5 || ld==7)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
