#include <bits/stdc++.h>
using namespace std;

/*
fact of N
*/
int fact(int n)
{

    if (n == 0)
    {
        return 1;
    }
    else
    {
        return (n * fact(n - 1));
    }
}

int main()
{
    int n;

    cout << "n: ";
    cin >> n;

    cout << "Factorial of N: " << fact(n) << endl;

    return 0;
}