/*
//! PATTERN 15

A B C D E
A B C D
A B C
A B
A

*/

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    // start 0 with approach
    for (int i = 0; i < n; i++)
    {

        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }

    // start 1 with approch
    for (int i = 1; i <= n; i++)
    {

        for (char ch = 'A'; ch <= 'A' + (n - i); ch++)
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