//week06-5.cpp
//3350. Adjacent Increasing Subarrays Detection II
//�D�ظ�@�Ѫ�3349�ܹ� �Q�ѵ��Ak �ѰݧA�̤j�i��k
//3349 ��combo ����3350 �Ψ��combo ����k �k�쥪 �ֿn�h��
class Solution {
public:
    int maxIncreasingSubarrays(vector<int>& nums) {
        int N = nums.size(); //�}�C�j�p
        vector<int> left(N, 1); //����kcombo
        vector<int> right(N, 1); //�k�쥪combo
        for(int i=1; i<N; i++){ //����kcombo �v�@��s
            if( nums[i-1] < nums[i] ) left[i] = left[i-1] + 1;
    }//�p�G���s�� �N��s �ܧ�j
        for(int i=N-2; i>=0; i--){//�k�쥪combo �v�@��s
            if( nums[i] < nums[i+1] ) right[i] = right[i+1] + 1;
    }
    int ans = 0; // ��̤j��k �]�N�O��Ӭ۾F�}�C �n����W�[�̤j����
    for(int i=1; i<N-1; i++){
        int now = min(left[i], right[i+1]); //�{�b�o�楪��combo �k��combo���ŦX
        if(now>ans) ans = now;//����j��k�Ψӧ�s ans
    }
    return ans;
    }
};
