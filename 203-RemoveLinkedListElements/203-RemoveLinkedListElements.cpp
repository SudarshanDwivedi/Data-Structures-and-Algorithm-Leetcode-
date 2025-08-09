// Last updated: 8/9/2025, 5:19:02 PM
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
    ListNode* removeElements(ListNode* head, int val) {
         ListNode* dummy = new ListNode(0);
         dummy->next = head;
    
    ListNode* current = dummy;

    while (current->next != nullptr) {
        if (current->next->val == val) {
            ListNode* temp = current->next;
            current->next = current->next->next;
            delete temp; 
        } else {
            current = current->next;
        }
    }
    return dummy->next;
}

};