#include<bits/stdc++.h>
using namespace std;
int main(){
    int r;
    cin >> r;
    int A[r];
    for (int i = 0 ; i < r ; i++){
        cin >> A[i];
    }
    for(int i = 0 ; i < r - 1 ; i++){
        for (int j = 0 ; j < r - i - 1 ; j++){
            if (A[j] > A[j + 1]){
                swap (A[j], A[j + 1]);
            }
        }
    }
    for (int i = 0 ; i < r ; i++){
        cout << A[i] <<" ";
    }
}