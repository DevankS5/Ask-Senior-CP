#include<bits/stdc++.h>
using namespace std;

int main (){
int a;
cin >> a;
int number = a;
int rev = 0;
while (a > 0) {
    rev = rev * 10 + a % 10;
    a /= 10;
}
    cout << rev << endl; 

if (number == rev) {
    cout << "YES" << endl;
} else {
    cout << "NO" << endl;
}
}