//week13-2b.cpp



class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(999); //不管題目 一律999
        ListNode* ans2 = new ListNode(888);//不管題目 一律888
        ans->next = ans2; //接起來
        return ans; //這個程式將node 999的下一個
    }
};
