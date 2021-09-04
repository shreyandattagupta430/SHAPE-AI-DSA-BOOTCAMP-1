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
