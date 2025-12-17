//week15-4.cpp
//13.Roman to Integer
class Solution {
public:
    int Table(char c) {//字母對照表 很簡單
        if(c=='I') return 1;//把所有字母變成數字
        if(c=='V') return 5;
        if(c=='X') return 10;
        if(c=='L') return 50;
        if(c=='C') return 100;
        if(c=='D') return 500;
        if(c=='M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int ans=0;
        int prev = 2000;
        for(int i=0;i<s.length();i++){
            //ans+=Table( s[i] ); //把字母s[i] 丟入Table();
            int now=Table(s[i]);//現在的位數
            if(prev < now) ans = ans + now- prev- prev;
            else ans+=now;//正常數字直接加法
            prev = now;// 現在數字變前一項
        } //這是錯誤的版本
        return ans;
    }
};
