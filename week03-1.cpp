/// week03-1.cpp
/// C++ 陣列 vector<int>
#include <iostream>
#include <vector>
using namespace std; ///不要忘了 使用命名空間 std
int main()
{

    cout << "請輸入4個數字: ";
    vector<int> a; /// 伸縮自如的陣列

    int now;
    for(int i=0; i<4; i++) {
        cin >> now; ///現在輸入1個數字
        a.push_back(now); ///推到a的最後面
    }
    for(int i=0; i<a.size(); i++) { /// 依照陣列大小size()來印
        cout << a[i] << ' '; /// 數字後面, 有空格
    }
    cout << "現在程式碼裡，又推入99，88兩個數字 結果呢";

    a.push_back(99); ///推到a的最後面
    a.push_back(88); ///推到a的最後面
    for(int i=0; i<a.size(); i++) {
        cout <<a[i] << ' '; /// 數字後面, 有空格
    }
}
