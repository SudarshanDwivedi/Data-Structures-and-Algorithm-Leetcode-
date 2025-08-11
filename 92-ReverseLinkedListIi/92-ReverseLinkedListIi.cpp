// Last updated: 8/11/2025, 8:49:33 PM
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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head->next==nullptr || head==nullptr || left==right){
            return head;
        }
        ListNode* current=head;
        ListNode* prev=nullptr;
        int i=1;
        while(current!=nullptr && i!=left){
            prev=current;
            current=current->next;
            i++;
        }
        ListNode* pointertostart=prev;
        ListNode* start=current;
        prev=nullptr;
        while(current!=nullptr && i!=right+1){
            ListNode* next=current->next;
            current->next=prev;
            prev=current;
            current=next;
            i++;
        }
        start->next=current;
        if(pointertostart!=nullptr){
            pointertostart->next=prev;
        }
        else{
            return prev;

        }
        return head;
    }
};