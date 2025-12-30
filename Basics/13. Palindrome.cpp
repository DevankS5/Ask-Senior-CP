#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin >> a;
    int rev = 0, original = a;
    while (a > 0) {
        int digit = a % 10;
        rev = rev * 10 + digit;
        a = a / 10;
    }
    cout << rev << endl;
    if (original == rev) {
        cout << "YES" ;
    } else {
        cout << "NO" ;
    }
}