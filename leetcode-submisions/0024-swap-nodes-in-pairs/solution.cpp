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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL){return head;}
        ListNode*second=head->next;
        ListNode* first=head;
        ListNode*prev=NULL;
        while(first!=NULL && second!=NULL){
            ListNode* third=second->next;

            if(prev==NULL){
                first->next=third;
                second->next=first;
                head=second;
            }
            else{
            prev->next=second;
            first->next=third;
            second->next=first;
            }
            prev=first;
            first=prev->next;
            if(first!=NULL){
            second=first->next;
            }
        }
        return head;
    }
};
