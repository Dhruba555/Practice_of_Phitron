#include<stdio.h>
int beauty(int* n)
{
    int i,a,flag=0;
    for(i=0; i<sizeof(*n); i++)
    {
        a=(*n)%10;
        if (a==7)
        {
            flag=1;
            break;
        }
        a=(*n)/10;
    }

    if (flag==1)
    {
        return 1;
    }
}
int main()
{
    int arr[100],n,count=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",arr[i]);
    }
    for(int i=0; i,n; i++)
    {
        if(beauty(&arr[i])==1)
        {
            //count++;
            printf("Yes");
        }
    }

}
