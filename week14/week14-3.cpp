///week14-3.cpp 換另一種寫法
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        vector<int> a; ///伸縮自如
        while (head != nullptr){// 不是結尾的 nullptr
            a.push_back( head->val ); //塞入伸縮自如
            head = head->next; //換下一筆
        } //逐一放入陣列a
        ListNode * ans = new ListNode(999);// 答案在這裡
        ListNode * now = ans; //幫忙收尾
        for(int i=a.size()-1;i>=0;i--){// 倒過來迴圈
            now->next = new ListNode( a[i] );// 新的 Node 接起來
            now=now->next;//換下一筆
        }//跟上周寫法很像
        return ans->next;
    }
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
