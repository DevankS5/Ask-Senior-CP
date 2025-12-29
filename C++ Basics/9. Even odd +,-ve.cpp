#include<bits/stdc++.h>
using namespace std;

int main (){
    int a ;
            int e = 0, o = 0 , p = 0, n = 0;

    cin >> a;
    for (int i = 0; i < a; i++) {
        int x ;
        cin >> x;
        if (x % 2 == 0) {e++;}
        else {o++;} 

        if (x > 0)   {p++;}   
        else if (x < 0)   {n++;}

    }
    cout << "Even: " << e << endl;
    cout << "Odd: " << o << endl;
    cout << "Positive: " << p << endl;
    cout << "Negative: " << n << endl;


}
