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
       int countA=0,countB=0;
       ListNode* ptrA=headA,*ptrB=headB;
       while(ptrA){
        ListNode* new_node=ptrB;
        while(new_node!=NULL && new_node!=ptrA){
            new_node=new_node->next;

        }
        if(new_node==NULL){
            ptrA=ptrA->next;
            continue;
        }
        else{
            return new_node;
        }
       }
       return NULL;
    }
};
