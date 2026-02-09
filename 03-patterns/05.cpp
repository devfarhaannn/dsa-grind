
//! PATTERN 5

/*
*****  1-5
****   2-4
***    3-3
**     4-2
*      5-1

*/

#include <bits/stdc++.h>
using namespace std;

void print(int n)
// 1.aproach
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++) // n-row+1.
        {
            cout << "* ";
        }
        cout << endl;
    }
    // 2. aproach
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
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