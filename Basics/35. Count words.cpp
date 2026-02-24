#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline (cin , s);

    int count = 0;
    bool insideWord = false;
    
    for(int i = 0; i < s.size(); i++) {
        // Check if the current character is a letter (lowercase or uppercase) 
        // Char acts as a small integer, so we can compare directly
        bool isAlpha = (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z');
        
        if(isAlpha) {
            // If we found a letter and we were NOT inside a word previously,
            // it means a new word has started.
            if(insideWord == false) {
                count++;
                insideWord = true; // Set flag to true [5]
            }
            // If insideWord was already true, we just continue (it's the same word)
        } else {
            // If we hit a symbol or space, we are no longer inside a word
            insideWord = false; // Reset flag [5]
        }
    }
    
    cout << count << endl;
    return 0;
}