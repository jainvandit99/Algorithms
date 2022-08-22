// Solution by Vandit Jain (jainvandit99)
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
    int count = 0;
​
    bool recursiveFunc(TreeNode* root, int exp){
        if(root == nullptr) return true;
        bool left = recursiveFunc(root->left, root->val);
        bool right = recursiveFunc(root->right, root->val);
        if(left && right){
            count++;
            return exp == root->val;
        }
        return false;
    }
    
    int countUnivalSubtrees(TreeNode* root) {
        if(root == nullptr) return 0;
        recursiveFunc(root, root->val);
        return count;
    }
    
    
};