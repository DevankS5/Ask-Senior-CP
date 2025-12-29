#include<bits/stdc++.h> 
using namespace std;
int main(){
    char a;
    cin >> a;
    if (a >= '0' && a <= '9') cout << "IS DIGIT";
    else if (a >= 'A' && a <= 'Z') cout << "ALPHA" << endl << "IS CAPITAL";
    else if (a >= 'a' && a <= 'z') cout << "ALPHA" << endl << "IS SMALL";

}

    // char a;
    // cin >> a;
    // int b = (int) (a);
    //Type casting char to int
    // if ( 48 <= b && b <= 57 ) cout << "IS DIGIT" ;
    // else if( 65 <= b &&  b<= 90 ) cout << "ALPHA" << endl << "IS CAPITAL" ;
    // else if ( 97 <= b && b<= 122 ) cout << "ALPHA" << endl << "IS SMALL" ;
    