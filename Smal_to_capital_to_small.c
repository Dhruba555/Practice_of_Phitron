#include<stdio.h>
int main()
{
    int i;
    char s[100];
    fgets(s,sizeof(s),stdin);
    //printf("%s",s);
    for(i=0;i<sizeof(s);i++)
    {
        if(s[i]>'A' && s[i]<'Z')
        {
            s[i]+=32;
        }
        else if(s[i]>'a' && s[i]<'z')
        {
            s[i]-=32;
        }
    }
    printf("%s",s);

}
