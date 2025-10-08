//week05-1.cpp
//LeetCode 學習計畫 58. Length of Last Word

class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s); //把字串 stringstream當iostream 的 cin 來用
        string word;// 字母
        //ss >> word; //像是 cin >> word 一樣 現在的 ss 可以用ss >> word
        //ss >> word; //讀第2次 會讀到第2個字
        while(ss >> word ){ //一直讀 讀到不能讀
            // 裡面甚麼都沒有
        }
        cout << word; // 先做一個實驗 看讀到誰

        return word.length() ; // 最後把長度送出去
    }
};
