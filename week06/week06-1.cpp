///week06-1.cpp
///Leetcode 學習計畫 242. Valid Anagram
///給你兩個字串 s t 請判斷他們用的字母是否相同
class Solution {
public:
    bool isAnagram(string s, string t) {
         //先看字串長度是否相同
         if( s.length() != t.length() ) return false; // 不同直接失敗
         // 先把字串 s 的字母 累積一下
         int R[26] = {}; //要有一個Recycle 回收桶 來分類放字母
         for(int i=0; i<s.length(); i++){
            char c = s[i] - 'a'; //本來小寫字母但要變成0-25要減'a'
            R[c]++;
         }
         //再把剛剛累積的字母看 t 用到那些 劃掉剛好用完 不能超過
         for(int i=0; i<t.length(); i++){
            char c = t[i] - 'a';
            R[c]--;// 用掉他
            if(R[c]<0) return false; //不夠用就失敗
         }
         return true; // 都沒有失敗 就是成功
    }
};
