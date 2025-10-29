//week08-1.cpp Leetcode 珼驹肈
//3370. Smallest Number With All Set Bits
class Solution {
public:
    int smallestNumber(int n) {
        int N = 0; //材˙ ノブ猭 тn琌秈碭计
        while (n>0){
            n = n / 2; //奔糷ブ
            N++; //1计(秈计)
        }
        cout << "瞷祇瞷 n 琌(秈计)碭计㎡ " << N << "计\n";
        int ans = 0; //材˙ ノ癹伴 舱场琌1N计
        for(int i=0; i<N; i++) {
            ans = ans * 2 + 1;
        }
        return ans;
    }
};
