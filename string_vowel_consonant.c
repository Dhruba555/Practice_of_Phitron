#include<stdio.h>
int main()
{
    int i,count=0;
    char line[100];
    fgets(line,sizeof(line),stdin);
    printf("%s",line);
    for(i=0;i<sizeof(line);i++)
    {
        if(line[i]== 'a' || line[i]== 'e' || line[i]== 'i' || line[i]== 'o' || line[i]== 'u' || line[i]== 'A' || line[i]== 'E' || line[i]== 'I' || line[i]== 'O' || line[i]== 'U')
        {
            count++;
        }
    }
    printf("%d",count);
}
