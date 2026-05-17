#include <bits/stdc++.h>
using namespace std;

void reverseNumber(int n)
{
    int reverseNo = 0;
    while (n > 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        reverseNo = (reverseNo * 10) + lastdigit;
    }
    cout << "reverse no: " << reverseNo;
}

int main()
{
    int n;
    cin >> n;
    cout << "n: ";
    reverseNumber(n);
}