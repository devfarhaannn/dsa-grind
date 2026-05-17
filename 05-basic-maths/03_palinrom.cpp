#include <bits/stdc++.h>
using namespace std;

void palidromNumber(int n)
{
    int reverseNo = 0;
    int duplicate = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        n = n / 10;
        reverseNo = (reverseNo * 10) + lastdigit;
    }
    if (reverseNo == duplicate)
    {
        cout << "this is palidrom: " << reverseNo << endl;
    }
    else
    {
        cout << "this is not palidrom: " << reverseNo << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << "n: ";
    palidromNumber(n);
}