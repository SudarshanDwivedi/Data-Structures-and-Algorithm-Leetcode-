// Last updated: 8/9/2025, 5:19:06 PM
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==nullptr || headB== nullptr){
            return nullptr;
        }
        ListNode *a= headA;
        ListNode *b= headB;
        while(a!=b){
            a=a ? a->next : headB;
            b=b ? b->next : headA;
        }
{
    return a;
}        


    }
};