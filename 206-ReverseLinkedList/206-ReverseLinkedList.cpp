// Last updated: 8/9/2025, 5:19:00 PM
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
        ListNode* prev=nullptr;
        ListNode* current=head;
        ListNode* nextnode=nullptr;

        while(current!=nullptr){
            nextnode=current->next;
            current->next= prev;
            prev=current;
            current=nextnode;
        }
        return prev;
    }
};