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
    
    void rightSideView(TreeNode* root, vector<int> &result, int currentDepth, int &traversedDepth){
        if(!root) return;
        if(currentDepth > traversedDepth){
            result.push_back(root->val);
            traversedDepth = currentDepth;
        }
        rightSideView(root->right,result,currentDepth+1,traversedDepth);
        rightSideView(root->left,result,currentDepth+1,traversedDepth);
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> result;
        int traversedDepth = 0;
        rightSideView(root, result, 1, traversedDepth);
        return result;
    }
};