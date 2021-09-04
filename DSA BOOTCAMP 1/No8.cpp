/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <cmath>
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int N, d, i;
    cout << "enter values";
    cin >> N >> d;
    int start = N - d;
    int *arr = new int[N];
    for (i=0; i<N; ++i) {
        if (start == N) start = 0;
        cin >> arr[start++];
    }
    for (i=0; i<N; ++i) cout << arr[i] << " ";
    return 0;
}
