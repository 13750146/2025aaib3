//week13-1b.cpp
//SOIT107_ADVANCE_004
#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b,a%b);
}

int main() {
    int a, b;
    cout << "Enter two integers: \n";
    cin >> a >> b;
    cout << "The greatest common divisor of " << a << " and " << b << " is " << gcd(a, b) << "\n";
}
