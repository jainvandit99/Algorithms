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
class BSTIterator {
public:
    stack<TreeNode*> s;
    void iterateTree(TreeNode* root){
        if(root == nullptr) return;
        TreeNode* ptr;
        ptr = root;
        while(ptr != nullptr){
            s.push(ptr);
            ptr=ptr->left;
        }
    }
    BSTIterator(TreeNode* root) {
        iterateTree(root);
    }
    
    
    int next() {
        TreeNode* top = s.top();
        s.pop();
        iterateTree(top->right);
        return top->val;
    }
    
    bool hasNext() {
        return !s.empty();
    }
};
​
/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */