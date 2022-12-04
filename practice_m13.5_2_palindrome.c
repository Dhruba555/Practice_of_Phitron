#include<stdio.h>
int main()
{
    char str[100];
    scanf("%s",str);
    int len=strlen(str),flag=0;
    for(int i=0;i<len;i++)
    {
        if(str[i]!=str[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}
