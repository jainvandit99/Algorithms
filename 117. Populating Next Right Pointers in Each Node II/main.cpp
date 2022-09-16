/*
Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(!root) return nullptr;
        queue<Node*> q;
        q.push(root);
        int thisLevelCount = 1;
        int nextLevelCount = 0;
        Node* ptr;
        while(!q.empty()){
            ptr = q.front();
            q.pop();
            thisLevelCount--;
            if(ptr->left) {
                q.push(ptr->left);
                nextLevelCount++;
            }
            if(ptr->right){
                q.push(ptr->right);
                nextLevelCount++;
            }
            if(thisLevelCount == 0){
                ptr->next = nullptr;
                thisLevelCount = nextLevelCount;
                nextLevelCount = 0;
            }else{
                ptr->next = q.front();
            }
        }
        return root;
    }
};