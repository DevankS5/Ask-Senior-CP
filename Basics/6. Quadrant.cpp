#include<bits/stdc++.h>
using namespace std;
int main(){
    float a , b;
    cin >> a >> b;
    if (a == 0.0 && b == 0.0) cout << "Origem";
    else if (a == 0.0 ) cout << "Eixo Y";
    else if (b == 0.0 ) cout << "Eixo X";
    if (a > 0.0 && b > 0.0 ) cout<<"Q1";
    if (a < 0.0 && b > 0.0 ) cout<<"Q2";
    if (a < 0.0 && b < 0.0 ) cout<<"Q3";
    if (a > 0.0 && b < 0.0 ) cout<<"Q4";

}