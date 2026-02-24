#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {3,5,4,9};
    int k=7;
    for(int i=0;i<4;i++){
        for(int j=0+1;j<4;j++){
            if(arr[i]+arr[j] == k){
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
    
}