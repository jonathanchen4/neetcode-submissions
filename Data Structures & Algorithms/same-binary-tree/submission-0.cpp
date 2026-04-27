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
        //base case
        if(!p && !q) return true;

        //compare left then compare right
        //p->left == p->right
        //while(p->left != nullptr && q->left != nullptr) {
         //   if (p->left != q->left) return false;
       // }
       if (p && q && p->val == q->val) {
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
       }
       else {
        return false;
       }
    }
};
