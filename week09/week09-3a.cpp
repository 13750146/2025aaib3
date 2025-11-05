//week09-3a.cpp
//SOIT106_ADVANCE_004
#include <iostream>
#include <cctype> // isupper() islower()
using namespace std;

int main()
{
	char c;
	while( cin >> c ){
		if( islower(c) ) c = toupper(c);
		else if( isupper(c) ) c = tolower(c);
		cout << c;
	}
	cout << "\n";
}
