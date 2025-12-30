#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
   vector<long long> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }
    long long x;
    cin >> x; 
    
    long long position = -1; 
    
   
    for(int i = 0; i < n; i++) {
        if(v[i] == x) {
            position = i; 
            break; 
        }
    }
    
    cout << position << endl;
    
    return 0;
}