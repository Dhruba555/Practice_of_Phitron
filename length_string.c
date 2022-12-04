#include<stdio.h>
int main()
{
    int i,count=0;
    char str[100];
    scanf("%s",str);
    //fgets(str,sizeof(str),stdin);
    for(i=1;str[i]!='\0';++i);
    printf("%d\n",i);//while we use scanf function then have to use only i.

    while(str[i]!='\0')
    {
        i++;
    }
     printf("%d\n",i-1);//while we use fgets then have to use i-1

}

