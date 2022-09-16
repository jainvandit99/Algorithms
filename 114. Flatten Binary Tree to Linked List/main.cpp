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
    void flatten(TreeNode* root) {
        root = flattenUtil(root);
    }
    
    
    TreeNode* flattenUtil(TreeNode* root){
        if(!root) return nullptr;
        TreeNode* leftEnd = flattenUtil(root->left);
        TreeNode* rightEnd = flattenUtil(root->right);
        TreeNode* right = root -> right;
        if(leftEnd) {
            root -> right = root -> left;
            root -> left = nullptr;
            leftEnd -> right = right;
            leftEnd -> left = nullptr;
            return rightEnd? rightEnd : leftEnd;
        }
        return rightEnd? rightEnd : root;
    }
​
};

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
    
    TreeNode* someMethod(TreeNode* root){
        if(!root) return nullptr;
        if(!root->left && !root->right){
            return root;
        }
        TreeNode* tempLeft = root->left;
        TreeNode* leftEnd = someMethod(tempLeft);
        TreeNode* tempRight = root->right;
        
        root->left = nullptr;
        
        if(leftEnd) {
            leftEnd->right = tempRight;
            root->right = tempLeft;
        }
        TreeNode* rightEnd = someMethod(tempRight);
        return rightEnd? rightEnd: leftEnd;
    }
    
    
    void flatten(TreeNode* root) {
        someMethod(root);
    }
};