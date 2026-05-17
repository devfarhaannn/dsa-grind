#include<bits/stdc++.h>
using namespace std;

/*
print name N times
*/

void printName(int i, int n){

    if(i > n){
        return; //# base case of recursion
    }

    cout << "farhan" << endl;
    printName(i+1, n);

}

int main(){
    int n;
    int i = 1;
    cout << "n: ";
    cin >> n;

    printName(i, n);
    
    return 0;
}