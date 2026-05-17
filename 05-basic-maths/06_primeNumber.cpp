#include <bits/stdc++.h>
using namespace std;

void primeNumber(int n)
{
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cnt++;
        }
    }
    if (cnt == 2)
        cout << "true";
    else
        cout << "false";
}

void primeNumberSQRT(int n)
{
    int cnt = 0;
    for (int i = 1; i * i <= n; i++)
    {

        if (n % i == 0)
        {
            cnt++;
            if ((n / i) != i)
            {
                cnt++;
            }
        }
    }
    if (cnt == 2)
        cout << "true";
    else
        cout << "false";
}
int main()
{
    int n;
    cout << "n: ";
    cin >> n;
    primeNumber(n);
    primeNumberSQRT(n);

    return 0;
}