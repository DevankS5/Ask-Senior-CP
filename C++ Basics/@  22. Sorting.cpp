#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    int arr[n];

    // Input all elements - 0-based indexing
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Selection sort
    for (int j = 0; j < n - 1; j++) {
        int index = j;
        for (int k = j + 1; k < n; k++) {
            if (arr[k] < arr[index]) {
                index = k;
            }
        }
        swap(arr[j], arr[index]);
    }

    // Print sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;
// int main (){
//     int n; cin >> n;
//     int arr[n];
//     for (int i = 1; i <= n; i++ ){
//         cin >> arr[i];
//         for (int j = 1; j < n-1; j++){
//             int index = i;
//             for (int k = j + 1; k <= n; k++){
//                 if (arr[k] < arr[index]){
//                     index = k;
//                 }
//             }
//             swap(arr[j], arr[index]);
//         }
//         cout << arr[i] << " " ;

//     }
// }
