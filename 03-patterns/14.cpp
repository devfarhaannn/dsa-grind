/*
//! PATTERN 14

A
A B
A B C
A B C D
A B C D E

*/


#include <bits/stdc++.h>
using namespace std;

void print(int n)
{

    for (int i = 0; i < n; i++)
    {
        // i=2; => 'A' + 2 => C ex.
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print(n);
    return 0;
}