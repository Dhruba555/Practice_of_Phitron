#include<stdio.h>
int main()
{
    int i,j,n;
    char str[100];
    scanf("%d",&n);
    for(j=0; j<n; j++)
    {
        scanf("%s",str);
        int len=strlen(str),flag=0;
        //printf("%d\n",len);
        for(i=0; i<len; i++)
        {
            if(str[i]!=str[len-i-1])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            if(len<=7)
            {
                printf("Case #3: %s\n",str);
            }
            else
            {
                printf("Case #2: %c%d%c\n",str[0],len-2,str[len-1]);
            }
        }
        else
        {
            printf("Case #1: Not Palindrome\n");
        }
    }

    return 0;
}
