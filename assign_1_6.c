#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);
/*
    if(a%b==0)
    {
        printf("The first number is divisible by the second number.\n");
    }
    if(b%a==0)
    {
        printf("The second number is divisible by the first number.\n");
    }
    if((a%b!=0) && (b%a!=0))
    {
        printf("None of them are divisible by other.\n");
    }
*/

    if((a%b==0) || (b%a==0))
    {
        if((a%b==0) && (b%a==0))
        {
            printf("Both of them are divisible by each other.\n");
        }
        else if(a%b==0)
        {
            printf("The first number is divisible by the second number.\n");
        }
        else
        {
            printf("The second number is divisible by the first number.\n");
        }
    }
    if((a%b!=0) && (b%a!=0))
    {
        printf("None of them are divisible by other.\n");
    }

}
