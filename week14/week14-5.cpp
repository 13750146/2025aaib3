///week14-5.cpp
///CPE UVA 10079
#include <iostream>
using namespace std;
int main()
{
    int N;
    while( cin >> N ){
        if(N<0) break;
        int ans = 1+(1+N)*N/2;
        cout << ans << "\n"; /// 在小黑輸入5 會跳出10
    }
}
