#include<stdio.h>

int main()
{
    char s[100],temp;
    scanf("%s",s);
    int len;
    len = strlen(s);
    for(int i=0; i<len-1; i++)
    {
        for(int j=0; j<len-i-1; j++)
        {
            if (s[j]<s[j+1])
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }

    }

    printf("%s\n",s);
}
