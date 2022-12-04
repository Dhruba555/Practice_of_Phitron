#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    char arr[50];
    fgets(arr,sizeof(arr),stdin);
    scanf("%d",&n);
    for(i=0;i<strlen(arr)-1;i++)
    {
        if((arr[i]+n)>'z')
        {
            arr[i]=96+(n-('z'-arr[i]));
        }
        else{
            arr[i]+=n;
        }

        printf("%c",arr[i]);
    }
}
