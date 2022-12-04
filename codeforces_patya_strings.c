#include<stdio.h>
int main()
{
    int i;
    char a[102],b[102];
    fgets(a,sizeof(a),stdin);
    fgets(b,sizeof(b),stdin);
    int len = strlen(a)-1;
    for(i=0;i<len;i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            a[i]+=32;
        }
        if(b[i]>='A' && b[i]<='Z')
        {
            b[i]+=32;
        }
    }
    int same=1;
    for(i=0;i<len;i++)
    {
        if(a[i]>b[i])
        {
            same=0;
            printf("1\n");
            break;
        }
        else if(a[i]<b[i])
        {
            same=0;
            printf("-1\n");
            break;
        }
    }
    if(same==1)
    {
        printf("0\n");
    }
    return 0;
}
