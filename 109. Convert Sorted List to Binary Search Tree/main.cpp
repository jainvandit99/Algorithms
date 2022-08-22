// Solution by Vandit Jain (jainvandit99)
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    
    ListNode* head;
    
    TreeNode* constructBST(int left, int right){
        if(left > right){
            return nullptr;
        }
        int mid = (left + right)/2;
        TreeNode* leftNode = constructBST(left,mid-1);
        
        TreeNode* node = new TreeNode(head->val);
        head = head->next;
        
        TreeNode* rightNode = constructBST(mid+1,right);
        node->left = leftNode;
        node->right = rightNode;
        
        return node;
    }
    
    
    TreeNode* sortedListToBST(ListNode* head) {
        this->head = head;
        int size = 0;
        while(head!=nullptr){
            size++;
            head = head->next;
        }
        return constructBST(0,size-1);
    }
};