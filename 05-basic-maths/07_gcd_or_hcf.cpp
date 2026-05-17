#include <bits/stdc++.h>
using namespace std;

void gcdNumber(int n1, int n2)
{

    for (int i = min(n1, n2); i >= 1; i--)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            cout << "GCD is: " << i << endl;
            break;
        }
    }
}

void gcdNumberEA(int n1, int n2)
{
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
            n1 = n1 % n2;
        else
            n2 = n2 % n1;
    }
    if (n1 == 0)
    {
        cout << "GCD is: " << n2;
    }
    else
    {
        cout << "GCD is: " << n1;
    }
}

int main()
{
    int n1, n2;

    cin >> n1 >> n2;

    gcdNumber(n1, n2);
    gcdNumberEA(n1, n2);

    return 0;
}