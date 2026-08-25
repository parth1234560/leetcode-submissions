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
    ListNode* merge2List(ListNode* h1,ListNode* h2){
        if(h1==NULL){
            return h2;
        }
        if(h2==NULL){
            return h1;
        }
        ListNode* dummy=new ListNode(-1);
        ListNode*t=dummy;
        while(h1!=NULL && h2!=NULL){
            if(h1->val<h2->val){
                ListNode* node=new ListNode(h1->val);
                t->next=node;
                h1=h1->next;
            }
            else{
                ListNode* node=new ListNode(h2->val);
                t->next=node;
                h2=h2->next;
            }
                t=t->next;

        }
        if(h1){
            t->next=h1;
        }
        if(h2){
            t->next=h2;
        }
        return dummy->next;

    }
    ListNode* findmid(ListNode* head){
        ListNode* slow=head;
        ListNode* fast=head->next;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        return slow;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL){
            return head;
        }

        ListNode* left=head;
        ListNode* right=findmid(head)->next;
        findmid(head)->next=NULL;
        ListNode* leftV=sortList(left);
        ListNode* rightV=sortList(right);
         return merge2List(leftV,rightV);
    }
};
