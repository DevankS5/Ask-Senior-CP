#include<bits/stdc++.h>
using namespace std;

int main (){
    int n;
    cin >> n;
    long long factorial = 1;
    for (int i = 1; i <= n; i++) {
        int a ; cin >> a;
        for (int j = a; j > 1; j--) {
            factorial *= j;
        }
        cout << factorial << endl;
        factorial = 1;  // Reset factorial for the next iteration
    }
}