

#include <bits/stdc++.h>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int a;
    cin >> a;
    bool first = true;
    for (int i = 2; i <= a; i++) {
        if (isPrime(i)) {
            if (!first) cout << " ";
            cout << i;
            first = false;
        }
    }
}

// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int a ; cin >> a;
// if (a == 2) cout << a ;
    

// else if (a == 3) cout << 3 ;


// else {
//     cout << 2 << " " << 3 ;
//     for (int i = 2 ; i <= a; i ++){
//         if (i % 2 != 0 && i % 3 != 0 ){
//             cout << " " << i ;
//         }
//     } 
// }
// }
