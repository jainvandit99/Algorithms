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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root) return vector<vector<int>>();
        vector<vector<int>> result;
        queue<TreeNode*> level;
        level.push(root);
        TreeNode* ptr;
        int thisLevelCount = 1;
        int nextLevelCount = 0;
        vector<int> row;
        while(!level.empty()){
            ptr = level.front();
            level.pop();
            thisLevelCount--;
            row.push_back(ptr->val);
            if(ptr->left) {
                level.push(ptr->left);
                nextLevelCount++;
            }
            if(ptr->right) {
                level.push(ptr->right);
                nextLevelCount++;
            }
            if(thisLevelCount == 0){
                thisLevelCount = nextLevelCount;
                result.push_back(row);
                row.clear();
                nextLevelCount = 0;
            }
        }
        
        return vector<vector<int>>(result.rbegin(), result.rend());
    }
};