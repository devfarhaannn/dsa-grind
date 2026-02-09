#include<bits/stdc++.h>
using namespace std;

// Functions are set of code which perform something for you
// Functions are used to modularise code 
// Functions are used to increase redability
// Functions are used to use same code multiple times

// 1.void -> which doesnot return anything
// 2.return 
// 3.parameterised
// 4.non parameterised


///1.void -> which doesnot return anything
// void printName(string name){
//     cout << "Hey " << name << endl;
// }

/// Take two numbers print it sum;
// int num1 , num2

// int sum (int num1, int num2){
//     int num3 = num1 + num2;
//     return num3;
// }

// int main() {
//     string name;
//     cin >> name;
//     printName(name);

//     string name2;
//     cin >> name2;
//     printName(name2);
//     return 0;

// int num1, num2;
// cin >> num1 >> num2;
// int res = sum(num1, num2);
// cout << res;

//  }

int main(){
    int num1, num2;
    cin >> num1 >> num2;

    // int minimum = min(num1, num2);
    // cout << minimum;
    int maximum = max(num1, num2);
    cout << maximum;
    return 0;

}

