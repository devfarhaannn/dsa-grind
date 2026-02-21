#include<bits/stdc++.h>
using namespace std;

void explainQueue(){

    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2};
    q.emplace(4); // {1, 2, 4}

    q.back() += 5; // add 5 in the last element
    // 4+5 = 9

    cout << "q.back(): " << q.back() << endl;

    // Q is {1,2,9}

    cout << "q.front(): "<< q.front() << endl; // print 1

    q.pop(); // {2,9}

    cout << "q.front(): " << q.front() << endl; // prints 2

}

int main(){
    explainQueue();
    return 0;
}