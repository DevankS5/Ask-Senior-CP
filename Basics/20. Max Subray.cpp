#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
        while(t--) {
        int n;
        cin >> n;
        
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i]; 
        }
            for(int i = 0; i < n; i++) {
            int currentMax = v[i]; 
            
            for(int j = i; j < n; j++) {
                currentMax = max(currentMax, v[j]);
                
                cout << currentMax << " "; 
            }
        }
        cout << endl; 
    }
    return 0;
}