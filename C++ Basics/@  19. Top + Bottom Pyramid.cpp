#include<bits/stdc++.h>
using namespace std;
int main (){

    int n;
    cin >> n; // Input number of rows for the upper half (excluding middle duplication)

    // Upper half
    for (int i = 0; i < n; i++) {
        // Spaces
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";
        // Stars
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";
        cout << "\n";
    }

    // Lower half (including middle duplication)
    for (int i = n - 1; i >= 0; i--) {
        // Spaces
        for (int j = 0; j < n - i - 1; j++)
            cout << " ";
        // Stars
        for (int j = 0; j < 2 * i + 1; j++)
            cout << "*";
        cout << "\n";
    }
}

