#include<stdio.h>
int main()
{
    int i,len;
    char str[100];
    fgets(str,sizeof(str),stdin);
    len=strlen(str)-1;
    printf("%d",len);
    for(i=len;i>=0;i--)
    {
        printf("%c ",str[i]);
    }
}
