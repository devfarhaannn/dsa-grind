
#include<bits/stdc++.h>
using namespace std;

//// User Input And Output

// int main(){
//     int x, y;
//     cin >> x >> y;
//     cout << "Value of x:" << x << endl << "value of y:" << y ;
//     return 0;
// }


//// Data Types 

//int main(){

    // int,long,float, double,char
    // string " ", getline
    // char ' '

    // string s1, s2;
    // cin >> s1 >> s2;
    // cout << s1 << " " << s2;

    // string str;
    // getline(cin, str);
    // cin >> str;
    // cout << str;

    // return 0;

//}


/// if else 
// int main() {

//     int age;
//     cin >> age;

//     if(age >= 18) {
//         cout << "You are adult ";
//     }
//     else if (age<10){
//         cout << "You are not adult";
//     }
//     return 0 ;

// }


/// switch break

int main(){
    int day;
    cin >> day;

    switch (day)
    {
        case 1:
        cout << "Monday";
        break;
        case 2:
        cout << "Tuesday";
        break;
        case 3:
        cout << "Wednesday";
        break;
        case 4:
        cout << "Thursday";
        break;
        case 5:
        cout << "Firday";
        break;
        case 6:
        cout << "Saturday";
        break;
        case 7:
        cout << "Sunday";
        break;
    
    default:
    cout << "invalid check";
        break;
    }
    return 0;
}
