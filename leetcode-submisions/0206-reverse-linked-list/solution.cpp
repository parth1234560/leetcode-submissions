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
        if(head==NULL || head->next==NULL){
            return head;
        }
        else{
            ListNode* headNode=reverseList(head->next);
            head->next->next=head;
            head->next=NULL;
            return headNode;
        }
        // ListNode* prev=NULL;
        // ListNode* curr=head;
        // if(head==NULL || head->next==NULL){
        //     return head;
        // }
        // ListNode* fwd=head->next;
        // while(curr!=NULL){
        //     curr->next=prev;
        //     prev=curr;
        //     curr=fwd;
        //     if(fwd!=NULL){
        //     fwd=fwd->next;
        //     }
        // }
        // return prev;

    }
};
