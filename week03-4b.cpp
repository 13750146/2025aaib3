// week03-4b.cpp �Ĥ@�ؼg�k���\
// �ǲ߭p�e��6�P283. Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int k=0; // �h�F���nums [k++] = nums[i] �o
        for(int i=0; i<nums.size(); i++){ //�������@��
            if(nums[i] != 0) nums[k++] = nums[i];
        }
        for(int i=k; i<nums.size(); i++){ //�A���@��
            nums[i] = 0; // ���� ��0 ����
        }
    }
};
