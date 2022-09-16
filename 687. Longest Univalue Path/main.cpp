// Solution by Vandit Jain (jainvandit99) in O(n) time
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
    
    int maxCount;
    
    int DFS(TreeNode* root, int &currCount){
        if(!root) return -1001;
        int leftCount = 0;
        int rightCount = 0;
        int leftVal = DFS(root->left, leftCount);
        int rightVal = DFS(root->right, rightCount);
        if(leftVal == rightVal && leftVal == root->val){
            maxCount = max(maxCount, 1+leftCount+rightCount);
            currCount = max(leftCount,rightCount)+1;
            return root->val;
        }else if(leftVal == root->val){
            currCount = leftCount+1;
            maxCount = max(maxCount,currCount);
            maxCount = max(maxCount,rightCount);
            return root->val;
        }else if(rightVal == root->val){
            currCount = rightCount+1;
            maxCount = max(maxCount,currCount);
            maxCount = max(maxCount,leftCount);
            return root->val;
        }else{
            maxCount = max(maxCount,leftCount);
            maxCount = max(maxCount,rightCount);
            currCount = 1;
            return root->val;
        }
        
    }
    
    int longestUnivaluePath(TreeNode* root) {
        this->maxCount = 0;
        int currCount;
        DFS(root, currCount);
        return max(maxCount-1,0);
    }
};