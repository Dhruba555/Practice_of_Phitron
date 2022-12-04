#include<stdio.h>
int main()
{
    char s[21];
    scanf("%s",s);
    int a,b,len,i,sum=0;
    scanf("%d %d",&a,&b);
    len=strlen(s)-1;

    for(i=0;i<=len;i++)
    {
        if(s[i]=='+')
        {
            sum+=a+b;
        }
        if(s[i]=='*')
        {
            sum+=a*b;
        }
        //total+=sum;
    }
    printf("%d\n",sum);

}
