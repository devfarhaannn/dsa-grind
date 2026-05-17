#include <bits/stdc++.h>
using namespace std;

void palidromNumber(int n)
{
    int sum = 0;
    int duplicate = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum = sum + (lastdigit * lastdigit * lastdigit);
        n = n / 10;
    }
    if (sum == duplicate)
    {
        cout << "this is armstrong: " << sum << endl;
    }
    else
    {
        cout << "this is not armstrong: " << sum << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << "n: ";
    palidromNumber(n);
}