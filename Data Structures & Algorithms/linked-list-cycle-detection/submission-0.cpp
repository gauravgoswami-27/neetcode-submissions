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
    bool hasCycle(ListNode* head) {
        ListNode* tmp = head;
        map<ListNode*,bool> m;
        while(tmp){
            if(m.find(tmp)!=m.end()) return true;
            m[tmp] = true;
            tmp = tmp->next;
        }
        return false;
    }
};
