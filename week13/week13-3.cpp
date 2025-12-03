//week13-3.cpp
//2. Add Two Numbers //小心進位
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       ListNode* ans = new ListNode(999); // 故意放999 代表奇怪的值
       ListNode* ans2 = ans;// 滑動的指標 把ans後面的 linked list 逐一處理
       int carry = 0; // 一開始沒有進位 放0
       while( l1 != nullptr || l2 != nullptr) {
            int now = carry;
            if(l1 != nullptr){ //處理左邊List1
                now +=l1->val; // 把值加進去
                l1 = l1->next; // 換下一筆
            }
            if(l2 != nullptr) {//處理右邊List2
                now += l2->val; // 把值加進去
                l2 = l2->next; // 換下一筆
            }
            ans2->next = new ListNode(now % 10); //慢慢接好
            ans2 = ans2->next; //繼續往後
            carry = now / 10;
       }
       if(carry>0) {// 還有進位 再多準備一位
        ans2->next = new ListNode(carry);
       }
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
