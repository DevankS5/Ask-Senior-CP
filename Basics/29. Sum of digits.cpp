// This is the classic string problem 
// here you cannot take array as input as there are no gaps in the number
// so we take string as input and then convert each character to digit and add it to sum 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;

    string s;
    cin >> s;   // reads digits like "13305"

    int sum = 0;
    for (char c : s) { // iterate through each character in the string
        sum += c - '0';   // convert char to digit
    }

    cout << sum;
    return 0;
}
