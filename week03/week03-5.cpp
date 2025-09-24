// week03-5.cpp
// 學習計畫 第9周 Arithmetic Progression From Sequence
class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(), arr.end()); // 把陣列 小到大 排好

        int d = arr[1] - arr[0]; //兩數差 d
        for(int i=1; i<arr.size(); i++){ // 迴圈從1開始 因要找到一項
            if(arr[i] - arr[i-1] != d) return false;
        } // 如果 後項-前面 不是 d 的話 就失敗
        return true;
    }
};
