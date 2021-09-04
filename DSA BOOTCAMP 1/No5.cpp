
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
   int i,n,c=0;
 cout<<"enter number";
 cin>>n;
 for(i=1;i<=n;i++)
 {
    if(n%i==0)
    {
        c++;
    }
 }
 if(c==2)
 {
     cout<<"prime no";
 }
 else
 {
     cout<<"non prime no";
 }
    return 0;
}
