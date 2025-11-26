//week12-4.cpp 學習計畫 第三題
//43. Multiply Strings
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0") return "0";//0乘上任何數 都變0
        int  N1 = num1.length(),N2 = num2.length();
        int N = N1 + N2;
        vector<int> ans(N); //伸縮自如的陣列 長度N
        for(int i=N1-1; i>=0;i--){ //逐項相乘 放入
            for(int j=N2-1;j>=0;j--){ //nums1[i] 乘 nums2[j]] 會放到ans[i+j+1]
                ans[i+j+1] += (num1[i] - '0') * (num2[j]- '0');// 放對格子
                if(ans[i+j+1]>9) { //若有進位
                    ans[i+j] += ans[i+j+1] / 10; // 進到上一位
                    ans[i+j+1] = ans[i+j+1] % 10;//原位留餘數
                }
            }
        }
        string strAns =""; //一開始 字串 甚麼都沒有
        if(ans[0]==0) { //首相是0 避開他 不要一開始就在字串裡放0
            for(int i=1;i<N;i++) strAns += (char)(ans[i]+'0');
        }else { //首相不是0 避開他 不要一開始就在字串裡放0
            for(int i=0;i<N;i++)  strAns += (char)(ans[i]+'0');
        }
        return strAns; //這題要寫很久 容易出錯
        }
};
