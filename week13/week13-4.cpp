//week13-4.cpp 聖誕節倒數程式
//神秘入口
//利用Leetcode 功能 我的遊戲場 可以寫程式
//前面甚麼都不用寫
int main() {
    char c; // 每一行 有一個英文
    int d; //有一個數字
    int now = 50; //刻度是50
    int ans = 0; // 刻度有幾次寫到0
    while(cin >> c >> d){
        if(c=='L') cout << "往左轉" << d << "格\n";
        if(c=='R') cout << "往右轉" << d << "格\n";

        if(c=='L') now -= d; //往左轉 減掉
        if(c=='R') now += d;//往右轉 加上

        now = (now % 100 + 100) % 100; // 取餘數
        if(now==0) ans++;// 刻度有幾次寫到0
        //cout << " 到格子的刻度" << now << "\n";
    }
    cout << "答案是:" << ans;// 每個人答案不一樣
}
