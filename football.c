#include<stdio.h>
void draw()
{
    int i,c1=0,c2=0;
    char s1[6],s2[6];
    scanf("%s",s1);
    scanf("%s",s2);
    for(i=0;i<5;i++)
    {
        if(s1[i]=='1')
        {
            c1++;
        }
    }
    for(i=0;i<5;i++)
    {
        if(s2[i]=='1')
        {
            c2++;
        }
    }
    if(c1>c2)
    {
        printf("Argentina\n");
    }
    else
    {
        printf("Brazil\n");
    }

}

int main()
{
    int a,b,i;
    scanf("%d %d",&a,&b);
    if(a==b)
    {
        draw();
    }
    else if(a>b)
    {
        printf("Argentina\n");
    }
    else
    {
        printf("Brazil\n");
    }
}
