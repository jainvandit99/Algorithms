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
    
    
    void TraverseDepth(TreeNode* ptr, stack<TreeNode*> &s){
        if(!ptr){
            return;
        }
        s.push(ptr);
        TraverseDepth(ptr->left, s);
        
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        stack<TreeNode*> s1, s2;
        TreeNode* ptr1 = root1, *ptr2 = root2;
        vector<int> result;
        TraverseDepth(ptr1, s1);
        TraverseDepth(ptr2, s2);
        bool flag1 = false, flag2 = false;
​
        while(true){
            flag1 = s1.empty(), flag2 = s2.empty();
            if(flag1 || flag2) break;
            ptr1 = s1.top();
            ptr2 = s2.top();
            if(ptr1->val < ptr2->val){
                result.push_back(ptr1 -> val);
                s1.pop();
                TraverseDepth(ptr1->right, s1);
                
            }else{
                result.push_back(ptr2 -> val);
                s2.pop();
                TraverseDepth(ptr2->right, s2);
                
            }
        }
        
        if(!flag1 || !flag2){
            while(!s1.empty()){
                ptr1 = s1.top();
                result.push_back(ptr1 -> val);
                s1.pop();
                TraverseDepth(ptr1->right, s1);
                
            }
            while(!s2.empty()){
                ptr2 = s2.top();
                result.push_back(ptr2 -> val);
                s2.pop();
                TraverseDepth(ptr2->right, s2);
            }
        }
        
        return result;
    }
    
    
};