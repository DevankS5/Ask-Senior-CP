#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    int arr[a][b];
    for(int i = 0; i < a; i++) {
        for(int j = 0; j < b; j++) {
            cin >> arr[i][j];
        }
    }
    
    int X;
    cin >> X;

    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            if(arr[i][j] == X){
                cout << "will not take number" ;
                return 0;
            }
        }
    }
    cout << "will take number" ;
    return 0;
    

}