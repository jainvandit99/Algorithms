// Solution by Vandit Jain (jainvandit99)
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
    
    
    int targetSum;
    vector<vector<int>> result;
    
    void recurse(vector<int> &curr, TreeNode* root, int currSum){
        if(!root) return;
        currSum += root->val;
        curr.push_back(root->val);
        if(!root->left && !root->right && currSum == targetSum){
            result.push_back(curr);
        }
        recurse(curr,root->left,currSum);
        recurse(curr,root->right,currSum);
        curr.pop_back();
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        this->targetSum = targetSum;
        vector<int> curr;
        recurse(curr,root,0);
        return result;
    }
};