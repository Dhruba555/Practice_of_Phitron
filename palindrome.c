#include<stdio.h>
int main()
{
    int i,len,c=0;
    char s[25];
    //fgets(s,sizeof(s),stdin);
    while(scanf("%s",&s)!= EOF)
    {
        len=strlen(s);
        printf("%s %d\n",s,len);
        for(i=0; i<len/2; i++)
        {
            if(s[i] != s[len-i-1])
            {
                c++;
            }
        }
        printf("%d\n",c);
        c=0;
    }


}
