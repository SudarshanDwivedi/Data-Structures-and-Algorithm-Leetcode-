// Last updated: 8/9/2025, 5:18:59 PM
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
public:
    bool isPalindrome(ListNode* head) {
       ListNode* slow= head;
       ListNode* fast = head;
       while(fast->next!=nullptr && fast->next->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
       }
       ListNode* newhead= reverseList(slow->next);
       ListNode* first=head;
       ListNode* second= newhead;
       while(second!=nullptr){
        if(first->val!= second->val){
            reverseList(newhead);
            return false;
        }
        
            first=first->next;
            second=second->next;
        }
        reverseList(newhead);
           
        return true;
        }

    
};