#include <bits/stdc++.h>
using namespace std;
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 10, y = 20;
    cout << "Before swap : " << x << " " << y << endl;
    swap(x, y);
    cout << "After swap : " << x << " " << y << endl;
}
/* This is called as Local swap because we are swapping the values of a and b
 but it is not affecting the values of x and y in main function because we are passing 
 the values of x and y to the function swap and not the reference of x and y. 
 To swap the values of x and y we need to pass the reference of x and y to the function swap.
  We can do this by using pointers or by using reference variables.
*/