
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
   int a=0,b=1,c=0,i,n;
    //Scanner sc=new Scanner(System.in);
    cout<<"Enter range";
    cin>>n;
    //System.out.println("Series is");
    cout<<a;
    cout<<b;
    for(i=0;i<n;i++)
    {
        c=a+b;
        cout<<c;
        a=b;
        b=c;
    }
    return 0;
}
