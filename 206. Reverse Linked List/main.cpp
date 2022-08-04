// Solution By Vandit Jain (jainvandit99) in O(n) time

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==nullptr) return head;
        ListNode* next = head->next;
        ListNode* curr = head;
        if(next==nullptr) return head;
        ListNode* temp;
        while(next!=nullptr){
            temp = next->next;
            next->next = curr;
            curr = next;
            next = temp;
        }
        head->next = nullptr;
        return curr;
    }
};