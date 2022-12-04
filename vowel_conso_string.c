#include<stdio.h>
int main()
{
    int i,vowel=0,conso=0,len;
    char arr[100];
    fgets(arr,sizeof(arr),stdin);
    len=strlen(arr)-1;
    printf("Total Character: %d\n",len);
    for(i=0;i<len;i++)
    {
        if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u' || arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U')
        {
            vowel++;
        }
        else if((arr[i]>='A' && arr[i]<='Z') || (arr[i]>='a' && arr[i]<='z'))
        {
            conso++;
        }
    }
    printf("Vowel: %d\nConsonant: %d\n",vowel,conso);
}
