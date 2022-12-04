#include<iostream>
using namespace std;
int main()
{
    int i,n,x;
    cin>>n;
    int arr[n+1];
    for(i=1;i<=n;i++)
    {
        arr[i]=0;
    }
    for(i=1;i<n;i++)
    {
        cin>>x;
        arr[x]=1;
    }


    for(i=1;i<=n;i++)
    {
        if(arr[i]==0)
        {
            cout<<i;
            break;
        }
    }

}

