#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline (cin , s);

    for(char c : s){
        if (c == '\\') break;
        cout << c ;
    }
    return 0;
}


// int main() {
//     string s;
//     // Use getline to read the full line including spaces
//     getline(cin, s); 
    
//     // Find the position of the backslash character
//     // .find returns the first occurrence index
//     int position = s.find('\\'); 
    
//     // Print the substring from index 0 up to the found position
//     cout << s.substr(0, position) << endl; 
    
//     return 0;
// }