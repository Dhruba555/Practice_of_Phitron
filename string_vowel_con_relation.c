#include<stdio.h>
int main()
{
    int i;
    char line[100];
    fgets(line,sizeof(line),stdin);
    for(i=0;i<sizeof(line);i++)
    {
        if(line[i]>= 'A' && line[i] <='Z')
            line[i]+=32;

    }
    //printf("%s",line);
    puts(line);
}
