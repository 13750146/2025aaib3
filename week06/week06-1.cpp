///week06-1.cpp
///Leetcode �ǲ߭p�e 242. Valid Anagram
///���A��Ӧr�� s t �ЧP�_�L�̥Ϊ��r���O�_�ۦP
class Solution {
public:
    bool isAnagram(string s, string t) {
         //���ݦr����׬O�_�ۦP
         if( s.length() != t.length() ) return false; // ���P��������
         // ����r�� s ���r�� �ֿn�@�U
         int R[26] = {}; //�n���@��Recycle �^���� �Ӥ�����r��
         for(int i=0; i<s.length(); i++){
            char c = s[i] - 'a'; //���Ӥp�g�r�����n�ܦ�0-25�n��'a'
            R[c]++;
         }
         //�A����ֿn���r���� t �Ψ쨺�� ������n�Χ� ����W�L
         for(int i=0; i<t.length(); i++){
            char c = t[i] - 'a';
            R[c]--;// �α��L
            if(R[c]<0) return false; //�����δN����
         }
         return true; // ���S������ �N�O���\
    }
};
