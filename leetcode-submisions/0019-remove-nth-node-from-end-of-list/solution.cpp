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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // ListNode*temp=head;
        // int count=0;
        // while(temp!=NULL){
        //     temp=temp->next;
        //     count++;
        // }
        // if(count==n){
        //     head=head->next;
        //     free(temp);
        //     return head;
        // }
        // temp=head;
        // int x=count-n;
        
        // while(temp!=NULL){
        //     x--;
        //     if(x==0){break;}
        //     else {temp=temp->next;}
        // }
        // temp->next=temp->next->next;
        ListNode* fast=head;
        while(n!=0){
            fast=fast->next;
            n--;
        }
        ListNode* slow=head;
        if(fast==NULL){
            head=head->next;
            return head;
        }
        while(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        if(slow!=NULL &&slow->next!=NULL){
        slow->next=slow->next->next;
        }
        return head;;
    }
};
