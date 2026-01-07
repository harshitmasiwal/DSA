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

    
    int sum(TreeNode* root){
            
            if(root == NULL){
                return 0;
            }
            long leftsum = sum(root->left);
            long rightsum = sum(root->right);

            long sum = root->val + leftsum + rightsum;

            return sum ;

        }

    long maxP = 0 ;
    long totalsum = 0 ;


    long find(TreeNode* root){
        if(root == NULL ){
            return 0;
        }

        long leftfind = find(root->left);
        long rightfind = find(root->right);

        long subtreesum = root->val + leftfind + rightfind;
        long remaning = totalsum - subtreesum;

        if(subtreesum*remaning > maxP){
            maxP = subtreesum*remaning;
        }
       
        return subtreesum ;
    }

    long maxProduct(TreeNode* root) {
        const int MOD = 1e9 + 7;

        if(root == NULL){
            return 0;
        }
        totalsum = sum(root);
        maxP = 0 ;


        find(root);

        return maxP % MOD;
        
    }
};