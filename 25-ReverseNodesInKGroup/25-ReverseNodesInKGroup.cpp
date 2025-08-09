// Last updated: 8/9/2025, 5:19:42 PM
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
 ListNode* reverseLinkedList(ListNode *head)
{
   ListNode* temp = head;  
   ListNode* prev = nullptr;  
   while(temp != nullptr){  
       ListNode* front = temp->next;  
       temp->next = prev;  
       prev = temp;  
       temp = front; 
   }
   return prev;  
}

ListNode* getKthNode(ListNode* temp, int k){
    k =k- 1; 
    while(temp != nullptr && k > 0){
         k--; 
        temp = temp -> next; 
    }
    return temp; 
}

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prevnode= nullptr;
        while(temp!=nullptr){
              ListNode* knode= getKthNode(temp, k);
              if(knode==nullptr){
                if(prevnode){
                    prevnode->next=temp;
                }
                break;
              }
              ListNode* nextnode=knode->next;
              knode->next=nullptr;
              reverseLinkedList(temp);
              if(temp==head){
                head= knode;
              }
              else{
                prevnode->next=knode;}
                
                prevnode=temp;
                temp=nextnode;
              
             
    }
    return head;
   
        }
         
};