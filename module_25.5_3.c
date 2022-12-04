#include<stdio.h>
#include<math.h>
int main()
{
    char s[50];
    int i,n,sum=0,counter=0;
    scanf("%s",&s);

    for(i=0;i<strlen(s);i++)
    {
        sum+= s[i]-96;
    }
    printf("%d\n",sum);
    for(i=0;i<sum/2;i++)
    {
        if(pow(2,i)==sum)
        {
            counter=1;
            n=i;
        }
    }
    if (counter==1)
    {
        printf("YES\n2^%d\n",n);

    }
    else{
        printf("NO");
    }



}
