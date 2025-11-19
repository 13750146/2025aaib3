//week11-2.cpp
//LeetCode 1491. Average Salary Excluding the Minimum and Maximum Salary
class Solution {
public:
    double average(vector<int>& salary) {
        double total = 0; //要有小數點
        int M = salary[0],m =salary[0];
        for(int i=0;i<salary.size();i++){
                total += salary[i];
                if(salary[i] > M) M=salary[i];
                if(salary[i] < m) m=salary[i];
        }
        //這是錯的 忘了把最大最小值刪掉
        return (total-M-m) / (salary.size()-2);
    }
};
