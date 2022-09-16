// Solution by Vandit Jain (jainvandit99) in O(n+m) time and O(1)space
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptrA = headA, *ptrB = headB;
        while(true){
            if(ptrA == nullptr && ptrB == nullptr) return nullptr;
            else if(ptrA == nullptr) {
                ptrA = headB;
                ptrB = ptrB -> next;
            }
            else if(ptrB == nullptr) {
                ptrB = headA;
                ptrA = ptrA->next;
            }
            else if(ptrA == ptrB) return ptrA;
            else{
                ptrA = ptrA->next;
                ptrB = ptrB->next;
            }
            
        }
        return nullptr;
    }
};