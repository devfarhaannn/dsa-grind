#include <bits/stdc++.h>
using namespace std;

void printAllDivision(int n)
{

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << "divisible number is: " << i << endl;
        }
    }
}
void printAllDivision02(int n)
{

    for (int i = 1; i <= sqrt(n); i++)
    {

        if (n % i == 0)
        {

            cout << i << endl;

            // avoid duplicate for perfect square
            if ((n / i) != i)
            {
                cout << n / i << endl;
            }
        }
    }
}
void printAllDivisionList(int n)
{
    vector<int> ls;

    // O(sqrt(n))

    for (int i = 1; i * i <= n; i++)
    { // 6 * 6 <= 36

        if (n % i == 0)
        {

            ls.push_back(i);

            // avoid duplicate for perfect square
            if ((n / i) != i)
            {
                ls.push_back(n / i);
            }
        }
    }
    // O(n log(n)) : n is number of factors
    sort(ls.begin(), ls.end());
    // O(n)
    for (auto it : ls)
        cout << it << " ";
}

int main()
{
    int n;
    cout << "n: ";
    cin >> n;

    printAllDivision(n);
    printAllDivision02(n);
    printAllDivisionList(n);

    return 0;
}