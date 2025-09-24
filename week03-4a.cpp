// week03-4a.cpp 第一種寫法成功
// 學習計畫第6周283. Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;// 先偷偷塞答案 再塞回去nums
        for(int i=0; i<nums.size(); i++){ //全部巡一次
            if(nums[i] != 0) ans.push_back(nums[i]);
        } // 有不是0的數 偷偷備份 塞到答案後面
        for(int i=0; i<nums.size(); i++){ //再巡一次
            if(i<ans.size())nums[i] = ans[i]; // 塞剛剛備份的答案
            else nums[i] = 0; // 之後 塞0 的值
        }
    }
};
