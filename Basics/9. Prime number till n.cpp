#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<< "2 ";
    for (int i = 2; i<=n; i++){
        
        for (int j = 2; j <= i; j++){
            if (i % j == 0){
                break;
            }
            else if (j == i - 1 ){
                cout << i <<" ";
            }
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
