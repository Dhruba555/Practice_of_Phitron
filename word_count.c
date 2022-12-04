#include<stdio.h>
int main()
{
    int i,len,count=0;
    char str[100];
    fgets(str,sizeof(str),stdin);
    len=strlen(str)-1;
    for(i=0;i<=len;i++)
    {
        if(str[i]== ' ' || str[i]=='\n' || str[i]=='\t')
            count++;
    }
    printf("Total words are: %d\n",count);
}
