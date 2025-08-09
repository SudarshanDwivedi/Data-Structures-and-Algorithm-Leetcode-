// Last updated: 8/9/2025, 5:19:31 PM
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
// int findlength(ListNode* temp){
   
//     return count;
// }

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr || head->next==nullptr || k==0){
            return head;
        }
        ListNode* temp=head;
         int len=1;
         while(temp->next!=nullptr){
            len++;
            temp=temp->next;
    }
    temp->next=head;
    k=k%len;
    int tail= len-k;
    while(tail>0){
        temp=temp->next;
        tail--;
    }
    head=temp->next;
    temp->next=nullptr;

    
    return head;
    }
};