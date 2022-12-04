#include<stdio.h>

int sum(int x);
int main()
{
    int n;
    scanf("%d",&n);
    int a=sum(n);
    printf("Sum = %d\n",a);
}
int sum(int x)
{
    int s=0,i;
    int arr[x];
    for(i=1;i<=x;i++)
    {
        scanf("%d",&arr[i]);
        s+=(arr[i]%10)+(arr[i]/1000);
    }
    return s;

}
