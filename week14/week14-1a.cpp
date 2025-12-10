//week14-1a.cpp
#include <iostream>
using namespace std;
void f(int n)
{
	cout << n%10;
	f(n/10);
}
int main()
{
	int n;
	cin >> n;
	int ans=0;
	while (n>0){
		ans=ans*10+n%10;
		n=n/10;
	}
	cout << ans << "\n";
}
