#include<bits/stdc++.h>
using namespace std;

int main (){
    char a;
    cin >> a;
    int b = (int) (a);
    if ( 48 <= b && b <= 57 ) cout << "IS DIGIT" ;
    else if( 65 <= b &&  b<= 90 ) cout << "ALPHA" << endl << "IS CAPITAL" ;
    else if ( 97 <= b && b<= 122 ) cout << "ALPHA" << endl << "IS SMALL" ;
}

