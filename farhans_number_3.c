#include<stdio.h>
#include<string.h>
int is_present(char s[])
{
    int i,o=0,se=0,t=0, f;
    int len =strlen(s)-1;
    for(i=0;i<len;i++)
    {
        if(s[i]=='1')
        {
             o++;
            break;
        }

    }
    for(i=0;i<len;i++)
    {
        if(s[i]=='7')
        {
             se++;
            break;
        }

    }
    for(i=0;i<len;i++)
    {
        if(s[i]=='9')
        {
             t++;
            break;
        }

    }
    f=o+se+t;
    return f;

}

int main()
{
    char s[100];
    fgets(s,sizeof(s),stdin);
    if(is_present(s)==3)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
