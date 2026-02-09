/*
//! PATTERN 4

1
2 2
3 3 3

*/
// https://www.naukri.com/code360/problems/n-triangles_6573689?leftPanelTabValue=PROBLEM

#include <bits/stdc++.h>
using namespace std;

void print(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
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