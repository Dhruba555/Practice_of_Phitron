#include<stdio.h>
int main()
{
    int i,len,cc=0,cd=0,cs=0;
    char str[100];
    fgets(str,sizeof(str),stdin);
    len=strlen(str)-1;
    for(i=0;i<=len;i++)
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            cc++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            cd++;
        }
        else{
            cs++;
        }
    }
    printf("Numbers of Character: %d\n",cc);
    printf("Numbers of Digit: %d\n",cd);
    printf("Numbers of Special Character: %d\n",cs);

}
