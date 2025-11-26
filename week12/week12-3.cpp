//week12-3.cpp 學習計畫 第三題
//976. Largest Perimeter Triangle
class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end());// 排序(又快又好)
        //for(int i=nums.size()-1;i>=0;i--){ // 用迴圈大到小排序
        for(int i=nums.size()-1;i>=2;i--){ //迴圈稍有修改 nums[i] vs -1 -2
            if(nums[i] < nums[i-1] + nums[i-2]) return nums[i] + nums[i-1] + nums[i-2];
        //如果順利兩邊和人於第三邊 就把周長加起來
        }
        return 0; //找不到任何合法的三角形 return 0
    }
};
