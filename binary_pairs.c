#include<stdio.h>
int main()
{
    int t,n,i,count=0,k;
    scanf("%d",&t);

    for(k=0; k<t; k++)
    {
        scanf("%d",&n);
        getchar();
        char str[n+1];
        fgets(str,sizeof(str),stdin);
        {
            for(i=0; i<n-1; i++)
            {
                if((str[i] == '0' && str[i+1] == '1') || ((str[i] == '1' && str[i+1] == '0')))
                {
                    count++;
                }
            }
            printf("%d\n",count);
            count = 0;
        }
    }

    return 0;
}
