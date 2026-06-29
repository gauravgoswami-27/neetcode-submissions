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
        unordered_set<ListNode*> seen;
        map<ListNode*,bool> m;
        while(tmp){
            if(seen.find(tmp)!= seen.end()) return true;
            seen.insert(tmp);
            tmp=tmp->next;
        }
        return false;
    }
};
