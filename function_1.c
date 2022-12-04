#include<stdio.h>
int mysum(int x,int y )
{
    printf("Adding Two Numbers....\n");
    return x+y;
}
int main()
{
    int a;
    a = mysum(5,7);
    printf("%d\n",a);
    return 0;
}
