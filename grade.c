#include<stdio.h>

char grade(int n)
{
    if(n>=80 && n<=100)
    {
        return 'A';
    }
    else if(n>=60 && n<=79)
    {
        return 'B';
    }
    else if (n>=40 && n<=59)
    {
        return 'C';
    }
    else
    {
        return 'F';
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    printf("%c\n",grade(n));
}
