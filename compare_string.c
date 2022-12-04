#include<stdio.h>
int main()
{
    int i,len_1,len_2,track=0;
    char str[100],arr[100];
    fgets(str,sizeof(str),stdin);
    fgets(arr,sizeof(arr),stdin);
    len_1=strlen(str)-1;
    len_2=strlen(arr)-1;
    if(len_1==len_2)
    {
        for(i=0; i<=len_1; i++)
        {
            if(str[i]!=arr[i])
            {
                track=1;
            }
        }

        if(track==1)
        {
            printf("Strings are not equal....");
        }
        else
        {
            printf("Strings are equal!!!");
        }
    }
    else
    {
        printf("Strings are not equal!!!");
    }
}
