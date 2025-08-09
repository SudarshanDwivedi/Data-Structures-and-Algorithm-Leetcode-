// Last updated: 8/9/2025, 5:19:09 PM
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
ListNode* findmiddle(ListNode* head){
    ListNode* slow= head;
    ListNode* fast=head->next;
    while(fast!=nullptr && fast->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

ListNode* mergelists(ListNode* lefthead,ListNode* righthead){
    ListNode* dummy= new ListNode(-1);
    ListNode* temp=dummy;
    while(lefthead!=nullptr && righthead!=nullptr){
        if(lefthead->val < righthead->val){
            temp->next=lefthead;
            temp=lefthead;
            lefthead=lefthead->next;
        }
        else{
            temp->next=righthead;
            temp=righthead;
            righthead=righthead->next;
        }
    }
    if(lefthead){
        temp->next=lefthead;
    }
    else{
        temp->next=righthead;
    }
    return dummy->next;
}

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        ListNode* middle=findmiddle(head);
        ListNode* lefthead= head;
        ListNode* righthead=middle->next;
        middle->next=nullptr;
        lefthead= sortList(lefthead);
        righthead= sortList(righthead);

        return mergelists(lefthead, righthead);


        
    }
};