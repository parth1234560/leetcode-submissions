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
    ListNode* reverseNode(ListNode* head){
        if(head==NULL || head->next==NULL){
            return head;
        }
        else{
            ListNode* newHead=reverseNode(head->next);
            head->next->next=head;
            head->next=NULL;
            return newHead;
        }
    }
    bool isPalindrome(ListNode* head) {
        // M1 via stack
        // stack<int>st;
        // ListNode*temp=head;
        // while(temp!=NULL){
        //     st.push(temp->val);
        //     temp=temp->next;
        // }
        // temp=head;
        // while(temp!=NULL){
        //     if(temp->val!=st.top()){
        //         return false;
        //     }
        //     st.pop();
        //     temp=temp->next;
        // }
        // return true;
        // M2 more space optimized-->
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast->next!=NULL && fast->next->next!=NULL){//covered both even and odd no of linked list
        slow=slow->next;
        fast=fast->next->next;

        }
        ListNode* newHead=reverseNode(slow->next);
        ListNode*first=head,*second=newHead;
        while(first && second){
            if(first->val!=second->val){
                ListNode* newHead2=reverseNode(newHead);
                return false;
            }
            first=first->next;
            second=second->next;
        }
                ListNode* newHead2=reverseNode(newHead);
        return true;
    }
};
