//week11-1a.cpp
//LeetCode 2154 Keep Multiplying Found Values by Two
//每次乘2倍 沒有出現的字 return出來
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        while(1){//用while迴圈 一直做
            int found = 0; //一開始沒找到
            for(int i=0;i<nums.size();i++){//找origina有沒有在nums裡
                if(nums[i]==original) found = 1;
                }
                if(found == 0) break;//失效 離開
                else original=original*2;//有找到 繼續 乘2倍
        return original;
    }
};
