#include<bits/stdc++.h>
using namespace std;
int main(){
    int a, b , count = 0;
    int x = 0 , y = 0  , z = 0  ;
    x + y + z == b ;
    0 <= x , y , z <= a ;
    cin >> a >> b ;

    
        for(x = 0 ; x <= a ; x++){
            for ( y = 0 ; y <= a ; y++){
                int z = b - x - y ;
                if ( 0 <= z && z <= a ){
                    count++ ;
                }
            }
            
        }
        cout << count ;
    }
