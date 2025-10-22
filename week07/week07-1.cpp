///week07-1.cpp
///TAICA NYCU 國立陽明交通大學電機系 期中考第6提
///Input 1-9 的數字 Output 繞圈圈的方形
///ex Input 3
/// 3 3 3 3 3
/// 3 2 2 2 3
/// 3 2 1 2 3
/// 3 2 2 2 3
/// 3 3 3 3 3 總5層樓
///Input 2 總3層樓 ，Input 3 總5層樓 Input 4 總7層樓Input 5 總9層樓
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;/// Step01
    for(int i=1; i<2*n; i++){///Step03 : for 迴圈 樓層
        for(int j=1; j<2*n; j++){/// 第幾格
            cout << n; ///先亂印數字n Output
        }
        cout << "現在是i樓, i:" << i; ///Step04 樓層鋼架(將會拆掉)
        cout << endl; /// ///Step02 : Output 跳行
    }
}
