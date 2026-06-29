/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        TreeNode* n1 = p;
        TreeNode* n2 = q;
        stack<TreeNode* > s1;
        stack<TreeNode* >s2;
        s1.push(p);
        s2.push(q);
        while(!s1.empty() || !s2.empty()){
            TreeNode* t1 = s1.top();
            TreeNode* t2 = s2.top();
            s1.pop();
            s2.pop();
            if(!t1 && !t2) continue;
            if(!t1 || !t2 || ((t1->val )!=(t2->val))) return false;
            s1.push(t1->left);
            s1.push(t1->right);
            s2.push(t2->left);
            s2.push(t2->right);
        }
        return true;
    }
};
