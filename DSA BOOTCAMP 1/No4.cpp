/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
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
