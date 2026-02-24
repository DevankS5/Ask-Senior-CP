#include<bits/stdc++.h>
using namespace std;

void Test(int n){
    if (n==0){
        return;
    }
    for(int i=1;i<n;i=i*2){
        cout<<i<<" ";
    }
    Test(n-1);
}

int main(){
    int n;
    cin>>n;
    Test(n);
}
 