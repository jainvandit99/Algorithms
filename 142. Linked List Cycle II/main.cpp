// Solution By Vandit Jain (jainvandit99)
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
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow, *fast;
        slow = fast = head;
        // Basic cycle detection
        while(fast != nullptr && fast -> next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                break;
            }
        }
        if(fast == nullptr || fast -> next == nullptr) return nullptr;
        slow = head;
        // Now keep increasing slow and head by 1 each and they will meet at intersection point
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};