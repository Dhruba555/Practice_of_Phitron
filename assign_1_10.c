#include<stdio.h>
#include<math.h>
int main()
{
    int num,i,flag=0;
    scanf("%d",&num);
    for(i=2; i<=sqrt(num);i++)
    {
        if(num%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Prime\n");
    }
    else
    {
        printf("Composite\n");
    }
}

