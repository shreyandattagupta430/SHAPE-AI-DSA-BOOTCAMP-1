/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;
int main(){
    string s;
    cout<< "enter the word";
    cin >> s;
    int t=1;
    for (int i=0;i<s.length();i++)
        if (isupper(s[i]))
        t++;
        cout<<t<<endl;
    return 0;
}