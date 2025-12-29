#include<bits/stdc++.h>
using namespace std;

int main (){
    long long l1,r1,l2,r2;
    cin >> l1 >> r1 >> l2 >> r2;
  l1 <= r1;
  l2 <= r2;

  if ( l2 <= r1 && l2 >= l1){
    cout << l2 << " ";
    if (r1 < r2) {
      cout << r1 ;
    }
    else {
      cout << r2 ;
    }
  }
  else if ( l1 >= l2 && l1 <= r2) {
    cout << l1 << " ";
    if (r1 < r2) {
      cout << r1 ;
    }
    else {
      cout << r2 ;
    }
  }
else cout << "-1";
}
