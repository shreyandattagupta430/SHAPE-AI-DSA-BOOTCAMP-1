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
    int n,grade;
    cout<<"enter no";
cin >> n;
cout << "enter grades";
for(int a0 = 0; a0 < n; a0++){
cin >> grade;
if (grade >= 38) {
int rem = grade % 5;
if (rem >= 3) grade += 5 - rem;
}
cout << grade << endl;
}
return 0;
}
