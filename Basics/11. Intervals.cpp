#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a , b , c, d;
    cin >> a >> b >> c >> d;
    long long f =max(a,c);
    long long g =min(b,d);
    if (f<= g)
    cout <<f <<" "<<g;
    else cout <<"-1";
}



// int main() {
//     long long a, b, c, d;
//     cin >> a >> b >> c >> d;

//     long long left  = max(a, c);
//     long long right = min(b, d);

//     if (left <= right)
//         cout << left << " " << right;
//     else
//         cout << -1;
// }