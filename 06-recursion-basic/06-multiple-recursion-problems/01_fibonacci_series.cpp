#include <bits/stdc++.h>
using namespace std;

int fibonacciSeries(int n)
{
    if (n <= 1)
        return n;
    int last = fibonacciSeries(n - 1);
    int slast = fibonacciSeries(n - 2);
    return last + slast;
}

int main()
{
    int n;
    cin >> n;

    //cout << "fibonacci number: " << fibonacciSeries(n) << " ";

    cout << "fibonacci series is: " ;
    for (int i = 0; i < n; i++)
    {
        cout << fibonacciSeries(i) << " ";
    }
    return 0;
}