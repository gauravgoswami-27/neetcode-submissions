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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int t=0;
        while(temp){
            t++;
            temp=temp->next;
        }
        temp = head;
        int r = t-n;
        if(r==0) return head->next;
        ListNode* prev = nullptr;
        for(int i=0;i<t-1;i++){
               if((i+1) == r){
                temp->next = temp->next->next;
                break;
               }
               temp = temp->next;
            }
            
        return head;
    }
};
