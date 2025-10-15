//week06-5.cpp
//3350. Adjacent Increasing Subarrays Detection II
//題目跟作天的3349很像 昨天給你k 天問你最大可能k
//3349 用combo 今天3350 用兩個combo 左到右 右到左 累積多少
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N = nums.size(); //陣列大小
        vector<int> left(N, 1); //左到右combo
        vector<int> right(N, 1); //右到左combo
        for(int i=1; i<N; i++){ //左到右combo 逐一更新
            if( nums[i-1] < nums[i] ) left[i] = left[i-1] + 1;
    }//如果有連續 就更新 變更大
        for(int i=N-2; i>=0; i--){//右到左combo 逐一更新
            if( nums[i] < nums[i+1] ) right[i] = right[i+1] + 1;
    }
    int ans = 0; // 找最大的k 也就是兩個相鄰陣列 要持續增加最大長度
    for(int i=1; i<N-1; i++){
        int now = min(left[i], right[i+1]); //現在這格左邊combo 右邊combo都符合
        if(now>ans) ans = now;//有更大的k用來更新 ans
    }
    return ans;
    }
};
