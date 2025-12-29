#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n , m;
    cin >>n;
    for (int i = 1 ; i <= n ; i++){
        cin >> m;
        long long fact = 1;
        for (int i = m ; i>0; i--){
        fact *= i;
    }
    cout<< fact<< endl;
}
}