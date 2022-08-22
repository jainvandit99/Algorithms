// Solution by Vandit Jain (jainvandit99) - Brute Force
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
    
    int targetSum;
    int count;
    
    void recurse(vector<int> &curr, TreeNode* root, long long currSum){
        if(!root) return;
        currSum += root->val;
        curr.push_back(root->val);
        if(currSum == targetSum){
            count++;
        }
        recurse(curr,root->left,currSum);
        recurse(curr,root->right,currSum);
        curr.pop_back();
    }
    
    void traverse(TreeNode* root){
        if(!root) return;
        vector<int> curr;
        traverse(root->left);
        recurse(curr, root, 0);
        traverse(root->right);
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        this->targetSum = targetSum;
        count = 0;
        traverse(root);
        return count;
    }
};


// Solution by Vandit Jain (jainvandit99) - One pass using hashmap. 
// Idea: if(c+d) = e then (a+b+c+d - e) = c+d <- intermdeiary where e is target sum. So we store count of sum at all nodes in a hashmap
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
    
    
    map<long,int> cache;
    int targetSum;
    int count;
    
    void traverse(TreeNode* root,long currSum){
        if(!root) return;
        currSum+=root->val;
        if(currSum == targetSum){
            count++;
        }
        count += cache[currSum - targetSum];
        cache[currSum]++;
        traverse(root->left, currSum);
        traverse(root->right, currSum);
        cache[currSum]--;
    }
    
    
    int pathSum(TreeNode* root, int targetSum) {
        this->targetSum = targetSum;
        count = 0;
        traverse(root,0);
        return count;
    }
};