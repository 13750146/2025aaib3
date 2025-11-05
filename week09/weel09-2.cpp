//weel09-2.cpp 學習計畫 Matrix 第4題
//Leetcode 73. Set Matrix Zeroes
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        //第1步先找所有0 記下他的位置
        int M= matrix.size(),N=matrix[0].size();
        vector<bool> markI(M),markJ(N);  //標記i 標記j
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(matrix[i][j]==0){// 遇到0 記下
                    markI[i] = true; //i標記起來
                    markJ[j] = true;//j標記起來
                }
            }
        }
        // 第2步 他的橫行matrixI[i] 直行matrixJ[i] 都設成0
        for(int i=0;i<M;i++){
            for(int j=0;j<N;j++){
                if(markI[i]==true || markJ[j]==true) matrix[i][j]=0;
            }
        }
    }
};
