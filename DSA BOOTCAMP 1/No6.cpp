/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
   int i,j,n,k;
   cout<<"enter range";
   cin>>n;
k=2*n-2;
for(i=0;i<n;i++)
{
    for(j=0;j<k;j++)
    cout<<" ";
    k=k-1;
    for (int j = 0; j <= i; j++) {
           
            cout << "* ";
        }
        cout<<endl;
}
    return 0;
}
