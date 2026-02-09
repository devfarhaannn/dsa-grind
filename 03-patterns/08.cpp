
//! PATTERN 8

/*
* * * * *
_ * * * _
_ _ * _ _

*/

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << "_ ";
        }

        // star
        for (int j = 0; j < 2 * n - (2 * i + 1); j++)
        {
            cout << "* ";
        }

        // space
        for (int j = 0; j < i; j++)
        {
            cout << "_ ";
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