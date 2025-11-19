//week11-1b.cpp 沒交過 Hashset
//LeetCode 2154 Keep Multiplying Found Values by Two
//每次乘2倍 沒有出現的字 return出來
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numSet;// Hashset
        for(int num:nums)numSet.insert(num);//C++ 的進階迴圈
        //請問original 有沒有 numSet裡 有的話 繼續做
        while( numSet.find(original) != numSet.end() ){ //沒有找到
            original = original*2;
        }
            return original;
    }
};
