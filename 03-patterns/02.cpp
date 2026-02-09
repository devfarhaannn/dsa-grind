/*
//! PATTERN 2

*
**
***
****

*/

// https://www.naukri.com/code360/problems/n-forest_6570178?leftPanelTabValue=PROBLEM


#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
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