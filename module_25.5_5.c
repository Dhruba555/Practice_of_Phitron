#include<stdio.h>

int s_num(int a)
{
    if(a!=0)
    {
        return a+s_num(a-1);
    }
    else{
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d\n",s_num(n));
}
