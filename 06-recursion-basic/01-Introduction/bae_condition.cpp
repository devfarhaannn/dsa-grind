#include <bits/stdc++.h>
using namespace std;

int cnt = 0;
void count()
{
    if (cnt > 7)
        return; // base condition
    cout << "count: " << cnt << endl;
    cnt++;
    
    count();
}

int main()
{
    count();
    return 0;
}