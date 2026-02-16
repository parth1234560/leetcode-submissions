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
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return true;
        }
      ListNode* mid=head;
      ListNode*slow=head,*fast=head;
      while(fast->next!=NULL && fast->next->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
      }  
      mid=slow;
      ListNode* ptr=mid->next,*prev=NULL;
    while(ptr!=NULL){
        ListNode* ptr_next=ptr->next;
        ptr->next=prev;
        prev=ptr;
        ptr=ptr_next;
    }
    bool isPalindrome=true;
    ListNode* start=head;
    while(prev!=NULL){
        if(prev->val!=start->val){
            isPalindrome=false;
        }
        prev=prev->next;
        start=start->next;

    }
    return isPalindrome;
    }
};
