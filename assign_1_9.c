#include<stdio.h>

int main()
{
    int a,i;
    scanf("%d",&a);
    printf("The factors of %d are: ",a);
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            printf("%d, ",i);
        }
    }
    //printf("The factors of %d are: %d",a,i);
}
