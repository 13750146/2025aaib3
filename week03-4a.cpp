// week03-4a.cpp �Ĥ@�ؼg�k���\
// �ǲ߭p�e��6�P283. Move Zeroes

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> ans;// �������뵪�� �A��^�hnums
        for(int i=0; i<nums.size(); i++){ //�������@��
            if(nums[i] != 0) ans.push_back(nums[i]);
        } // �����O0���� �����ƥ� ��쵪�׫᭱
        for(int i=0; i<nums.size(); i++){ //�A���@��
            if(i<ans.size())nums[i] = ans[i]; // ����ƥ�������
            else nums[i] = 0; // ���� ��0 ����
        }
    }
};
