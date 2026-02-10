
//! PATTERN 17

/*
_ _ _ _ A _ _ _ _
_ _ _ A B A _ _ _
_ _ A B C B A _ _
_ A B C D C B A _
A B C D E D C B A

*/

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "_ ";
        }

        // chararacters
        char ch = 'A';
        int breakpoint = (2 * i + 1) / 2;
        for (int j = 0; j < 2 * i + 1; j++)
        {
            cout << ch << " ";
            if (j < breakpoint)
                ch++;
            else
                ch--;
        }

        // space
        for (int j = 0; j < n - i - 1; j++)
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