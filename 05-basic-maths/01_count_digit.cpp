#include <bits/stdc++.h>
using namespace std;

// https://www.naukri.com/code360/problems/number-of-digits_9173

void countDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        count = count + 1;
        n = n / 10;
    }
    cout << "count simply way : " << count << endl;
}
void MathsWayForCouting(int n)
{
    int count = int(log10(n)) + 1;
    cout << "count maths way: " << count << endl;
}

int main()
{
    int n;
    cout << "n: ";
    cin >> n;

    countDigit(n);
    MathsWayForCouting(n);

    return 0;
}
