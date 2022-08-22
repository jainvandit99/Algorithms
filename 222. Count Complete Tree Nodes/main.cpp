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
    
    int calculateDepth(TreeNode* root){
        int depth = 0;
        while(root){
            depth++;
            root=root->left;
        }
        return depth;
    }
    
    bool checkLeafNodeExists(TreeNode* root, int node, int depth){
        int left = 0;
        int right = pow(2,depth-1)-1;
        int mid;
        int currentDepth = 1;
        while(currentDepth < depth){
            currentDepth++;
            mid = (left + right)/2;
            if(mid<node){
                root=root->right;
                left = mid + 1;
            }else{
                root = root->left;
                right = mid ;
            }
        }
        return root;
    }
    
    int countNodes(TreeNode* root) {
        if(!root) return 0;
        int depth = calculateDepth(root);
        int mid, left = 0, right = pow(2,depth-1)-1;
        while(left<=right){
            mid = (left+right)/2;
            if(checkLeafNodeExists(root,mid,depth)){
                left = mid+1;
            }else{
                right = mid-1;
            }
        }
        
        return pow(2,max(0,depth-1)) - 1 + left;
    }
};