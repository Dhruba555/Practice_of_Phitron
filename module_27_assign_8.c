#include<stdio.h>
int main()
{
    char s[100];
    int i,len;
    scanf("%s",s);
    len= strlen(s);
    for(i=0; i<len; i++)
    {
        if(i%2==0)
        {
            printf("%c",s[i]);
        }
        else if(i%2!=0)
        {
            printf("%c%c",s[i],s[i]);
        }
    }

}
