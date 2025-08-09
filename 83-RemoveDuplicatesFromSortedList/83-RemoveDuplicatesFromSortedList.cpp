// Last updated: 8/9/2025, 5:19:18 PM
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        while(temp!=nullptr && temp->next!=nullptr){
            ListNode* nextnode= temp->next;
            while(nextnode!= nullptr && nextnode->val== temp->val ){
                nextnode=nextnode->next;
            }
            temp->next=nextnode;
            
            temp=temp->next;
        }
        return head;
    }
};