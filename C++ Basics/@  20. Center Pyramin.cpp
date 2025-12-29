#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < (n - i ); j++) cout << " ";
        for (int k = 1; k < 2 * i + 2; k++) cout << "*";
        if (i != n - 1) cout << "\n"; 
}}
