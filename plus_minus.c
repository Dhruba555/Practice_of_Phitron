#include<stdio.h>
int main()
{
    int n,count=1,max=1;
    scanf("%d",&n);
    char s[101];
    scanf("%s",s);
    for(int i=1; i<n; i++)
    {
        if(s[i]==s[i-1])
        {
            count++;
            //printf("Count-1: %d\n",count);
        }
        else
        {
            count=1;
            //printf("Count-2: %d\n",count);
        }

        if(max<=count)
        {
            max = count;
        }
        //printf("Maximum: %d\n\n",max);
    }
    printf("%d",max);


    return 0;
}
