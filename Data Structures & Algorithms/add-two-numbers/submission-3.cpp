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

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int c = 0;
        ListNode* dummy = new ListNode(0);
        ListNode *tail = dummy;

        while(l1!=nullptr || l2!=nullptr || c!=0){
            int v1 = (l1!=nullptr) ? l1->val: 0;
            int v2 = (l2!=nullptr) ?l2->val:0;
            int val = v1+v2+c;
            c = val/10;
            val = val%10;
            tail->next = new ListNode(val);
            tail = tail->next;
            l1 = (l1!=nullptr) ? l1->next :nullptr;
            l2 = (l2!=nullptr) ?l2->next : nullptr;
        }
        ListNode*  res = dummy->next;
        delete dummy;
        return res;
        
    }
};
