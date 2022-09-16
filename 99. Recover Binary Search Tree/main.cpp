/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    
    
    
    void recoverTree(TreeNode* root){
        traverse(root);
        
        int temp = firstSwap -> val;
        firstSwap -> val = secondSwap -> val;
        secondSwap -> val = temp;
    }
    
    private:
    
    TreeNode* firstSwap = nullptr;
    TreeNode* secondSwap = nullptr;
    TreeNode* prev = nullptr;
    
    void traverse(TreeNode *root){
        if(!root) return;
        
        traverse(root->left);
        if(prev && root->val <= prev->val && !firstSwap){
                firstSwap = prev;
        }
        if(prev && root->val <= prev->val && firstSwap){
                secondSwap = root;
        }
        prev = root;
        traverse(root->right);
    }
};