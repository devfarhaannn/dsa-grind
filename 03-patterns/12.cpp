/*
//! PATTERN 12

1
1 _ _ _ _ _ _ 1
1 2 _ _ _ _ 2 1
1 2 3 _ _ 3 2 1
1 2 3 4 4 3 2 1

*/

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    // 1. approach
    int space = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }

        // number
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << endl;
        space -= 2;
    }

    // 2. aproach

    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // space
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }

        // number
        for (int j = i; j >= 1; j--)
        {
            cout << j;
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