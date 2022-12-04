#include<stdio.h>

int add_three_nums(int a, int b, int c)
{
	return a+b+c;
}
int main()
{
    int x,y,z;
    scanf("%d %d",&x,&y);
    z=add_three_nums(x,y,0);
    printf("%d\n",z);
}
