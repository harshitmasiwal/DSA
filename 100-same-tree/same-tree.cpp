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

    bool isSame(TreeNode* p, TreeNode* q){

        if( p == q && p == NULL && q == NULL){
            return 1;
        }
        else if( (p != NULL && q != NULL)  && p->val != q->val ){
            return 0;
        }
        
        if( p != NULL && q != NULL)
        return isSame(p->left,q->left) && isSame(p->right,q->right);
        else
        return 0;
    }

    bool isSameTree(TreeNode* p, TreeNode* q) {

        bool ans = isSame(p,q);

        return ans;
    }
};