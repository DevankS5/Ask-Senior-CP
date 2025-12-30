#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int pos = 0, neg = 0, even = 0, odd = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int a;
        cin >> a;
        if (a > 0) pos++;
        else if (a < 0) neg++;
        if (a % 2 == 0) even++;
        else odd++;
    }
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << pos << endl;
    cout << "Negative: " << neg << endl;
}