//week13-1a.cpp
//SOIT107_ADVANCE_004
#include <iostream>
using namespace std;
int main() {
    int a, b;
    cout << "Enter two integers: \n";
    cin >> a >> b;
    int ans = 1;
    for(int i=1;i<=a;i++){
    if(a%i==0 && b%i==0) ans = i;
    }
    cout << "The greatest common divisor of " << a << " and " << b << " is " << ans << "\n";
    return 0;
 }
