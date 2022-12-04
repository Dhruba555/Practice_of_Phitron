#include<stdio.h>
int main()
{
    int l1,l2,r1,r2,t;
    scanf("%d",&t);
    for(int i=0; i<t; i++)
    {
        scanf("%d %d %d %d",&l1,&r1,&l2,&r2);
        if(l1>=l2 && l1<=r2)
        {
            printf("%d\n",l1);
        }
        else if (l2>=l1 && l2<=r2)
        {
            printf("%d\n",l2);
        }
        else
        {
            printf("%d\n",(l1+l2));
        }

    }

}
