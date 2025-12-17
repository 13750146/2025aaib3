//week15-3.cpp
//459. Repeated Substring Pattern
class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        //算法很簡單
        //再找找看
        string s2 = s+s;// 兩倍長度
        string s3 = s2.substr(1,s2.length()-2);
        return s3.find(s) != string::npos;
    }//老師寫不出來
};
