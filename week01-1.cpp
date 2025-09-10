//week01-1.cpp
//Leet Code 學習計畫 大海撈針 在 haystack 找到 needle
//28. Find the Index of the First Occurrence in a String
class Solution {
public:
    int strStr(string haystack, string needle) {
        // 要用迴圈，把所有可能的位置找一次
        // ex: sadbutsad 很難過 要找 sad
        // i:0 sad 把 haystack 剪前面N個數字
        //   sad
        // i:1 sad
        //   adb
        // i:2 sad...
        //   dbu
        int H = haystack.length(), N = needle.length();
        for(int i = 0; i<= H - N; i++){
            if( haystack.substr(i, N) == needle) return i;
            // 從 i 開始 N 個字母 竟然相同找到答案
        }
        return -1;// 沒有找到答案 要回傳-1代表失敗
    }
};
