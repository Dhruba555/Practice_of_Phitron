#include<stdio.h>

int is_present(char s[],int a)
{
    int i,flag=0;
    int len =strlen(s)-1;
    for(i=0;i<len;i++)
    {
        if(s[i]==a)
        {
            flag = 1;
            //break;
        }
        else
        {
            flag = 0;
        }
    }
    return flag;

}

int main()
{
    char s[100];
    fgets(s,sizeof(s),stdin);
    if(is_present(s,1)==1 && is_present(s,9)==1 && is_present(s,7)==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
