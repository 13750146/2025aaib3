//week07-2.cpp 學習計畫 Simulation 第二題
//657.Robot Return to Origin
// 給你'U' up 往上 'D' down 往下  'L'left 往左 'R' right 往右
class Solution {
public:
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        // for(int i=0; i<moves.lengh(); i++){ // 傳統的for 迴圈}
        // char c = moves[i];
        for(char c : moves){ // C++ 進階迴圈
            if(c=='U'){ //up 往上
                y++;
            }else if(c=='D'){//down 往下
                y--;
            }else if(c=='L'){//left 往左
                x--;
            }else if(c=='R'){//right 往右
                x++;
            }
        }// 離開迴圈後
        if(x==0 && y==0)return true;
        else return false;
    }
};
