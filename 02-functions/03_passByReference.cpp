#include<bits/stdc++.h>
using namespace std;

// ===============================
//! pass by reference
// ===============================

void doSomething(int &num){ // this & sign will say get the num from the exact address and not the copy 
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main(){
    int num = 10;
    doSomething(num); //  the original values go 
    //# it says take the original of num which is 10 and give it to doSomething() function

    cout << num << endl; // this will print 20 now as the functions has send the original value and not the copied one

    return 0;
}

// arr[] is already passByRef value if you declared array to print a number 
// It's not declared by &arr[]