
#include <stdio.h>
#include <iostream>
using namespace std
int main()
{
    int n,i,j,K=0;
    cout<<"enter range";
    cin>>n;
    int a[100];
    cout<<"enter elements";
    for(i=0;i<n;i++)
    {
    cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                K=a[j];
                a[j]=a[j+1];
                a[j+1]=K;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<a[n-2];
    }
    return 0;
}

