#include<stdio.h>
#include<string.h>
int main()
{
    int i,len,h1,h2,hh;
    char s[15];
    fgets(s,sizeof(s),stdin);
    h1=(int)s[1]-'0';
    h2=(int)s[0]-'0';
    hh=(h2*10)+(h1%10);
    /*len=strlen(s)-1;
    printf("%d %c\n",len,s[len-2]);
    */
    //printf("%d",strlen(s));

    if(s[8]== 'A')
        {
            if(hh==12)
            {
               printf("00");
               for(i=2;i<=7;i++)
               {
                    printf("%c",s[i]);
               }
            }
            else
            {
                for(i=0;i<=7;i++)
               {
                    printf("%c",s[i]);
               }
            }
        }
        if(s[8]== 'P')
        {
            if(hh==12)
            {
               printf("12");
               for(i=2;i<=7;i++)
               {
                    printf("%c",s[i]);
               }
            }
            else
            {
                hh=hh+12;
                printf("%d",hh);
                for(i=2;i<=7;i++)
               {
                    printf("%c",s[i]);
               }
            }
        }


    return 0;
}
