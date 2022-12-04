#include<stdio.h>

int main()
{
    int n,add=0,sub=0;
    scanf("%d",&n);
    for(int i=1; i<=n; i++)
    {
        if((3*i)%2!=0)
        {
            add+= (3*i)+((3*i)-1)+((3*i)-2);
        }


    }
    printf("%d\n",add);
    printf("%d\n",sub);
}
