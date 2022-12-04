#include<stdio.h>
#include<math.h>

int prime_num(int num)
{
    int j,flag=0;

    for(j=2; j<=num/2; j++)
    {
        if(num%j==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        return 1;
    }
}
float ave_even(int s[], int n)
{
    int i,sum=0,c=0;
    float average;
    for(i=0;i<n;i++)
    {
        if((s[i]%2)==0)
        {
            sum+=s[i];
            c++;
        }
    }
    average=sum/c;
    return average;
}
int main()
{
    int n,arr[100],i,count=0;
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0; i<n; i++)
    {
        if(prime_num(arr[i])==1)
        {
            count++;
        }
    }
    printf("Prime Numbers: %d\n",count);
    printf("Average of all even integers: %.2f\n",ave_even(arr,n));
    return 0;
}
