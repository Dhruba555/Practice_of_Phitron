#include<stdio.h>

int s_num(int a)
{
    if(a<=0)
    {
        return ;
    }
    else
    {
        printf("%d ",a);
        s_num(a-1);
    }

}
int main()
{
    int n;
    scanf("%d",&n);
    s_num(n);
}
